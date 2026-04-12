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
 * [player, cursorObject, "Head", "FieldDressing"] call unsci_kam_compat_fnc_medkit
 *
 * Public: No
 */

_this set [7, _this param [7, 1]];
params ["_medic", "_patient", "_bodyPart", "_classname", "_itemUser", "", "", "_bandageEffectiveness"];
TRACE_1("fnc_medkit",_this);

[_patient, "activity", ECSTRING(treatment,Activity), [[_medic, false, true] call ACEFUNC(common,getName), ECSTRING(treatment,Medkit_DisplayName)]] call ACEFUNC(medical_treatment,addToLog);

if (EGVAR(treatment,medkitFullHeals)) then {
    [ACEQGVAR(medical_treatment,fullHealLocal), _patient, _patient] call CBA_fnc_targetEvent;
} else {
    [ACEQGVAR(medical_treatment,bandageLocal), [_patient, _bodyPart, _classname, _bandageEffectiveness], _patient] call CBA_fnc_targetEvent;

    if (KAMGVAR(pharma,RequireInsIV)) then {
        [_medic, _patient, _bodyPart, "", objNull, "kat_IV_16"] call KAMFUNC(pharma,applyIV);
        [ACEQGVAR(medical_treatment,ivBagLocal), [_patient, _bodyPart, _classname, _medic, _itemUser, "UNSCI_MedkitPlasmaIV"], _patient] call CBA_fnc_targetEvent;
    } else {
        [ACEQGVAR(medical_treatment,ivBagLocal), [_patient, _bodyPart, _classname, _medic, _itemUser, "UNSCI_MedkitPlasmaIV"], _patient] call CBA_fnc_targetEvent;
    };

    [KAMQGVAR(pharma,fluidLocal),[ _patient, -500, 20], _patient] call CBA_fnc_targetEvent;
};

playSound3D ["ik\unsci\addons\treatment\sounds\unsci_medkit_use.wav", objNull, false, getPosASL _medic, 1.5, 1, 50];
