#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Either fully heals or partially heals the patient.
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Body Part <STRING>
 * 3: Treatment <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorObject, "Head", "FieldDressing"] call unsci_treatment_fnc_medkit
 *
 * Public: No
 */

params ["_medic", "_patient", "", "_treatment"];
TRACE_1("fnc_medkit",_this);

[_patient, "activity", QUOTE(%1 used a Medical Kit on the patient), [[_medic, false, true] call ACEFUNC(common,getName)]] call ACEFUNC(medical_treatment,addToLog);

if (GVAR(medkitFullHeals)) then {
    [ACEQGVAR(medical_treatment,fullHealLocal), _patient, _patient] call CBA_fnc_targetEvent;
} else {
    [ACEQGVAR(medical_treatment,bandageLocal), [_patient, _bodyPart, _classname, _bandageEffectiveness], _patient] call CBA_fnc_targetEvent;
};
