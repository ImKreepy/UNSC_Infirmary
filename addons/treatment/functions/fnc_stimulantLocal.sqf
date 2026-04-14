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
 * [player] call unsci_treatment_fnc_stimulantLocal;
 *
 * Public: No
 */

params ["_patient"];

private _bloodPressureH = GET_BLOOD_PRESSURE(_patient) select 1;
if ((floor (random 100) < ((linearConversion [50, 100, _bloodPressureH, 0, GVAR(stimulantChance), true]) min (linearConversion [140, 200, _bloodPressureH, GVAR(stimulantChance), 0, true]))) && {[_patient] call ACEFUNC(medical_status,hasStableVitals)}) then {
    [_patient, false] call ACEFUNC(medical,setUnconscious);
};
