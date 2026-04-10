#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Update medical menu GUI body image.
 *
 * Arguments:
 * 0: Body image controls group <CONTROL>
 * 1: Target <OBJECT>
 * 2: Body part index <NUMBER>
 *
 * Return Value:
 * None <NONE>
 *
 * Example:
 * [CONTROL, _target, 0] call unsci_kam_compat_fnc_updateBodyImage
 *
 * Public: No
 */

params ["_ctrlGroup", "_target", "_selectionN"];
TRACE_1("fnc_updateBodyImage",_this);

private _ctrlBiofoam = _ctrlGroup controlsGroupCtrl IDC_BODY_TORSO_BIOFOAM;

if (_target getVariable [QGVAR(biofoamHealDp), false] && (_target getVariable [KAMQGVAR(breathing,activeChestSeal), false]) isEqualTo false) then {
    _ctrlBiofoam ctrlShow true;
} else {
    _ctrlBiofoam ctrlShow false;
};
