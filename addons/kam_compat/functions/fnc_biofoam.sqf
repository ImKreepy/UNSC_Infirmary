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
 * [player, cursorObject, "Head", "FieldDressing"] call unsci_kam_compat_fnc_biofoam
 *
 * Public: No
 */

_this set [7, _this param [7, 1]];
params ["_medic", "_patient", "_bodyPart", "_classname", "", "", "", "_bandageEffectiveness"];
TRACE_1("fnc_biofoam",_this);

[_patient, "activity", QUOTE(%1 used %2 on the patient), [[_medic, false, true] call ACEFUNC(common,getName), "Biomedical Foam"]] call ACEFUNC(medical_treatment,addToLog);

[ACEQGVAR(medical_treatment,bandageLocal), [_patient, _bodyPart, _classname, _bandageEffectiveness], _patient] call CBA_fnc_targetEvent;

private _hasDP = _patient getVariable KAMQGVAR(breathing,deepPenetratingInjury);
private _hasPneumothorax = (_patient getVariable KAMQGVAR(breathing,pneumothorax)) isEqualTo 1;

if (_hasDP && _hasPneumothorax) then {
    [_patient, "activity", QUOTE(%1 healed Deep Penetration with %2), [[_medic, false, true] call ACEFUNC(common,getName), "Biomedical Foam"]] call ACEFUNC(medical_treatment,addToLog);
    [QGVAR(biofoamHealPneumothorax), [_medic,_patient], _patient] call CBA_fnc_targetEvent;
};
