#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Uses medigel on the patient.
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
 * [player, cursorObject, "Head", "FieldDressing"] call unsci_treatment_fnc_medigel
 *
 * Public: No
 */

_this set [7, _this param [7, 1]];
params ["_medic", "_patient", "_bodyPart", "_classname", "", "", "", "_bandageEffectiveness"];
TRACE_1("fnc_medigel",_this);

[_patient, "activity", CSTRING(Activity), [[_medic, false, true] call ACEFUNC(common,getName), CSTRING(MediGel_DisplayName)]] call ACEFUNC(medical_treatment,addToLog);

[ACEQGVAR(medical_treatment,bandageLocal), [_patient, _bodyPart, _classname, _bandageEffectiveness], _patient] call CBA_fnc_targetEvent;
