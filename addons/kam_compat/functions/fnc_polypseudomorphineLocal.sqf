#include "..\script_component.hpp"
/*
 * Author: Im Kreepy
 * Checks for dosage then begins sedating process
 *
 * Arguments:
 * 0: Patient <OBJECT>
 * 1: Class Name <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "UNSCI_Pollysue_30u"] call unsci_kam_compat_fnc_polypseudomorphineLocal;
 *
 * Public: No
 */

params ["_patient", "_className"];

private _random = random 3;

if (_className isEqualTo "UNSCI_Pollysue_30u") then {

    private _currentDose = [_patient, _className] call ACEFUNC(medical_status,getMedicationCount) select 0;

    if (_currentDose >= POLLYSUE_MAX_TO_SEDATE) then {
        if (_random <= 1) then {
            [_patient, "BRADYCARDIA", 120, 1200, -40, 0, 0] call ACEFUNC(medical_status,addMedicationAdjustment);
        };

        _patient setVariable [KAMQGVAR(surgery,sedated), true, true];
        [_patient, true] call ACEFUNC(medical,setUnconscious);
    };
};

if (_className isEqualTo "UNSCI_Pollysue_100u") then {
    if (_random <= 1) then {
        [_patient, "BRADYCARDIA", 120, 1200, -40, 0, 0] call ACEFUNC(medical_status,addMedicationAdjustment);
    };

    _patient setVariable [KAMQGVAR(surgery,sedated), true, true];
    [_patient, true] call ACEFUNC(medical,setUnconscious);
};
