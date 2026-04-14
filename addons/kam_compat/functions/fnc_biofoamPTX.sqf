#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Uses biofoam on the patient.
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
 * [player, cursorObject, "Head", "FieldDressing"] call unsci_kam_compat_fnc_biofoamPTX
 *
 * Public: No
 */

_this set [7, _this param [7, 1]];
params ["_medic", "_patient", "_bodyPart", "_classname"];
TRACE_1("fnc_biofoamPTX",_this);

[_patient, "activity", CSTRING(BiofoamPTX_Activity), [[_medic, false, true] call ACEFUNC(common,getName), ECSTRING(treatment,Biofoam_DisplayName)]] call ACEFUNC(medical_treatment,addToLog);

[QGVAR(biofoamPTXLocal), [_medic,_patient], _patient] call CBA_fnc_targetEvent;
[_patient,0.2] call ACEFUNC(medical,adjustPainLevel);
