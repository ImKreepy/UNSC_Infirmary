#include "..\script_component.hpp"
/*
 * Author: Glowbal, mharis001
 * Administers medication to the patient on the given body bodypart.
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Body Part <STRING>
 * 3: Treatment <STRING>
 * 4: Item User (not used) <OBJECT>
 * 5: Used Item <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorObject, "RightArm", "Morphine", objNull, "ace_morphine"] call ace_medical_treatment_fnc_medication
 *
 * Public: No
 */

params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];

[_patient, _usedItem] call ACEFUNC(addToTriageCard);
[_patient, "activity", LSTRING(Activity_usedItem), [[_medic, false, true] call ACEFUNC(common,getName), "Stimulant Autoinjector"]] call ACEFUNC(addToLog);

[ACEQGVAR(medicationLocal), [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;
[QGVAR(stimulantLocal) [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;
