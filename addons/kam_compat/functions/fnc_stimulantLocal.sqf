#include "..\script_component.hpp"
/*
 * Author: Im Kreepy
 * Checks for Stimulant Wakeup values to restore consciousness
 *
 * Arguments:
 * 0: Patient <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call unsci_kam_compat_fnc_stimulantLocal;
 *
 * Public: No
 */

params ["_patient"];

private _sedated = _patient getVariable [KAMQGVAR(surgery,sedated), false];
if (_sedated) then {
    _patient setVariable [KAMQGVAR(surgery,sedated), false, true];
};
