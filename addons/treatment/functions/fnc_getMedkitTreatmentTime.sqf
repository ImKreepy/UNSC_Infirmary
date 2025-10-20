#include "..\script_component.hpp"
/*
 * Author: Im Kreepy
 * Calculates the treatment time for a Medical Kit.
 *
 * Arguments:
 * 0: Medic (not used) <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Body Part <STRING>
 *
 * Return Value:
 * Treatment Time <NUMBER>
 *
 * Example:
 * [player, cursorObject, "head"] call unsci_treatment_fnc_getMedkitTreatmentTime
 *
 * Public: No
 */

params ["_medic","_patient", "_bodyPart", "_bandage"];
TRACE_1("fnc_getMedkitTreatmentTime",_this);
private _openWounds = GET_OPEN_WOUNDS(_patient);
private _bandagedWounds = GET_BANDAGED_WOUNDS(_patient);
private _stitchedWounds = GET_STITCHED_WOUNDS(_patient);
private _bodyPart = toLowerANSI _bodyPart;

private _wounds = 0;
if (GVAR(medkitFullHeals)) then {
    {
        private _countOpenWounds = count (_openWounds getOrDefault [_x, []]);
        private _countBandagedWounds = count (_bandagedWounds getOrDefault [_x, []]);
        private _countStitchedWounds = count (_stitchedWounds getOrDefault [_x, []]);
        _wounds = _wounds + _countOpenWounds + _countStitchedWounds;
    } forEach ALL_BODY_PARTS;

    private _treatmentTime = GVAR(timeCoefficient_medkitFull) * _wounds;
    if (_treatmentTime > 0) exitWith {
        _treatmentTime
    };
} else {

    // ----- ACE's fnc_getBandageTime -----

    private _partIndex = ALL_BODY_PARTS find toLowerANSI _bodyPart;
    if (_partIndex < 0) exitWith { ERROR_1("invalid partIndex - %1",_this); 0 };
    
    private _targetWounds = [_patient, _bandage, _bodyPart] call ACEFUNC(medical_treatment,findMostEffectiveWounds);

    private _woundCount = count _targetWounds;

    if (_woundCount == 0) exitWith {0};

    private _bandageTimesArray = [BANDAGE_TIME_S, BANDAGE_TIME_M, BANDAGE_TIME_L];
    private _bandageTime = 0;

    {
        private _wound = _x;
        _wound params ["_classID", "", "_amountOf"];
        _y params ["_effectiveness", "", "_impact"];
        private _category = (_classID % 10);

        private _woundTime = _bandageTimesArray select _category;

        if (ACEGVAR(medical_treatment,advancedBandages != 0)) then {
            _woundTime = _woundTime * linearConversion [0, _effectiveness, _impact, 0.666, 1, true];
        };

        _bandageTime = _bandageTime + _woundTime;
    } forEach _targetWounds;

    if ([_medic] call ACEFUNC(medical_treatment,isMedic)) then {
        _bandageTime = _bandageTime + BANDAGE_TIME_MOD_MEDIC;
    };

    if (_medic == _patient) then {
        _bandageTime = _bandageTime + BANDAGE_TIME_MOD_SELF;
    };

    if (_woundCount > 1) then {
        _bandageTime = _bandageTime - (2 * _woundCount);
    };

    _bandageTime max 2.25;
    private _treatmentTime = GVAR(timeCoefficient_medkitPartial) * _bandageTime;
    if (_treatmentTime > 0) exitWith {
        _treatmentTime
    };
};
