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
 * [player, cursorTarget, "Head", "FieldDressing"] call unsci_kam_compat_fnc_canBiofoamPTX
 *
 * Public: No
 */

params ["_medic", "_patient", "_bodyPart", "_bandage"];
TRACE_1("fnc_canBiofoamPTX",_this);
_bodyPart = toLowerANSI _bodyPart;

// If patient is swimming, don't allow bandage actions.
if (_patient call ACEFUNC(common,isSwimming)) exitWith {false};

// Bandage type and bandage setting XNOR to show only active actions
if ((_bandage == "BasicBandage") isEqualTo (ACEGVAR(medical_treatment,advancedBandages) != 0)) exitWith {false};

private _canHeal = false;
private _hasDP = _patient getVariable [KAMQGVAR(breathing,deepPenetratingInjury), false];
private _hasPTX = _patient getVariable [KAMQGVAR(breathing,pneumothorax), 0] > 0;

if (_hasDP && _hasPTX) then {
    _canHeal = true;
};

_canHeal
