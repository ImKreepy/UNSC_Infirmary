#include "..\script_component.hpp"
/*
 * Author: kymckay
 * Prevents bandage actions from showing if selected body part isn't bleeding.
 * Toggles between showing all or only basic bandage action for advanced setting.
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Body Part <STRING>
 * 3: Treatment <STRING>
 *
 * Return Value:
 * Can Bandage <BOOL>
 *
 * Example:
 * [player, cursorTarget, "Head", "FieldDressing"] call unsci_treatment_fnc_canBandage
 *
 * Public: No
 */

params ["_medic", "_patient", "_bodyPart", "_bandage"];
TRACE_1("fnc_canBandage",_this);
_bodyPart = toLowerANSI _bodyPart;

// If patient is swimming, don't allow bandage actions.
if (_patient call ACEFUNC(common,isSwimming)) exitWith {false};

// Bandage type and bandage setting XNOR to show only active actions
if ((_bandage == "BasicBandage") isEqualTo (ACEGVAR(medical_treatment,advancedBandages) != 0)) exitWith {false};

private _canBandage = false;

{
    _x params ["_woundClassID", "_amountOf", "_bleeding"];

    private _classIndex = _woundClassID / 10;
    private _className = ACEGVAR(medical_damage,woundClassNames) select _classIndex;

    if (GVAR(medkitFullHeals)) then {
        if (_amountOf * _bleeding > 0) exitWith {
            _canBandage = true;
        };
    } else {
        if ((_className isNotEqualTo "UNSCI_BlamiteWound" && _className isNotEqualTo "UNSCI_SpikeWound") && (_amountOf * _bleeding > 0)) exitWith {
            _canBandage = true;
        };
    };
} forEach (GET_OPEN_WOUNDS(_patient) getOrDefault [_bodyPart, []]);

_canBandage
