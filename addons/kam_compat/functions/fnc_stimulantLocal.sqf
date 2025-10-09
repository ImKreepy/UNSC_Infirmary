#include "..\script_component.hpp"
/*
 * Author: Mazinski.H, Blue
 * Checks for Stimulant Wakeup values to restore consciousness
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 *
 * Return Value:
 * None
 *`
 * Example:
 * [player, cursorTarget] call unsci_kam_compat_fnc_stimulantLocal;
 *
 * Public: No
 */

params ["_medic", "_patient"];

private _sedated = _patient getVariable [KAMQGVAR(surgery,sedated), false];
if (_sedated) exitWith {};

private _bloodPressureH = GET_BLOOD_PRESSURE(_patient) select 1;

if ((floor (random 100) < ((linearConversion [50, 100, _bloodPressureH, 0, GVAR(stimulantChance), true]) min (linearConversion [140, 200, _bloodPressureH, GVAR(stimulantChance), 0, true]))) && {[_patient] call KAMFUNC(vitals,hasStableVitals)}) then {
    [_patient, false] call ACEFUNC(medical,setUnconscious);
};
