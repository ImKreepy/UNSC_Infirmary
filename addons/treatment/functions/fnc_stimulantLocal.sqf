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
private _value1 = (linearConversion [50, 100, _bloodPressureH, 0, GVAR(stimulantChance), true]);
private _value2 = (linearConversion [140, 200, _bloodPressureH, GVAR(stimulantChance), 0, true]);

if ((floor (random 100) < (_value1 min _value2)) && {[_patient] call ACEFUNC(medical_status,hasStableVitals)}) then {
    [_patient, false] call ACEFUNC(medical,setUnconscious);
};

[{_this setAnimSpeedCoef 1.5;}, _patient, GVAR(Stim_TimeToEffect)] call CBA_fnc_waitAndExecute;
[{_this setAnimSpeedCoef 1;}, _patient, GVAR(Stim_TimeInSystem)] call CBA_fnc_waitAndExecute;
