#include "..\script_component.hpp"
/*
 * Author: MiszczuZPolski
 * Check if patient's body part can be treated by NPWT
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Body Part <STRING>
 *
 * Return Value:
 * Can use NPWT <BOOLEAN>
 *
 * Example:
 * [player, cursorObject, "LeftLeg"] call unsci_kam_compat_fnc_canNPWT
 *
 * Public: No
 */

params ["_medic", "_patient", "_bodyPart"];
TRACE_1("fnc_canNPWT",_this);
_bodyPart = toLowerANSI _bodyPart;

// If patient is swimming, don't allow bandage actions.
if (_patient call ACEFUNC(common,isSwimming)) exitWith {false};

private _canBandage = false;

{
    _x params ["_woundClassID", "_amountOf", "_bleeding"];

    private _classIndex = _woundClassID / 10;
    private _className = ACEGVAR(medical_damage,woundClassNames) select _classIndex;

    // If any single wound on the bodypart is bleeding bandaging can go ahead
    if ((_className isNotEqualTo "UNSCI_BlamiteWound" && _className isNotEqualTo "UNSCI_SpikeWound") && (_amountOf * _bleeding > 0)) exitWith {
        _canBandage = true;
    };
} forEach (GET_OPEN_WOUNDS(_patient) getOrDefault [_bodyPart, []]);

_canBandage
