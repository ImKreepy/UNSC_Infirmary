#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Handles additional medications.
 *
 * Arguments:
 * 0: Patient <OBJECT>
 * 1: Body Part <STRING>
 * 2: Treatment <STRING>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [player, "RightArm", "Morphine"] call unsci_kam_compat_fnc_medicationLocal
 *
 * Public: No
 */

params ["_patient", "_bodyPart", "_classname"];
TRACE_1("fnc_medicationLocal",_this);

if (!alive _patient) exitWith {};

private _sedated = _patient getVariable [KAMQGVAR(surgery,sedated), false];

if (!ACEGVAR(medical_treatment,advancedMedication)) exitWith {
    switch (_className) do {
        case "UNSCI_Stimulant": {
            if !(_sedated) then {
                private _painSuppress = GET_PAIN_SUPPRESS(_patient);
                _patient setVariable [VAR_PAIN_SUPP, (_painSuppress + STIMULANT_PAIN_SUPPRESSION) min 1, true];
                [ACEQGVAR(medical,WakeUp), _patient] call CBA_fnc_localEvent;
            };
        };
        case "UNSCI_Pollysue_30u": {
            private _painSuppress = GET_PAIN_SUPPRESS(_patient);
            _patient setVariable [VAR_PAIN_SUPP, (_painSuppress + POLLYSUE_PAIN_SUPPRESSION) min 1, true];
        };
        case "UNSCI_Pollysue_100u": {
            private _painSuppress = GET_PAIN_SUPPRESS(_patient);
            _patient setVariable [VAR_PAIN_SUPP, (_painSuppress + POLLYSUE_PAIN_SUPPRESSION) min 1, true];
        };
    };
};

if (_className in ["UNSCI_Stimulant","UNSCI_Pollysue_30u","UNSCI_Pollysue_100u"]) then {
    switch (_className) do {
        case "UNSCI_Stimulant": {
            [QEGVAR(treatment,stimulantLocal), [_patient], _patient] call CBA_fnc_targetEvent;
        };
        case "UNSCI_Pollysue_30u": {
            [QGVAR(polypseudomorphineLocal), [_patient, _className], _patient] call CBA_fnc_targetEvent;
        };
        case "UNSCI_Pollysue_100u": {
            [QGVAR(polypseudomorphineLocal), [_patient, _className], _patient] call CBA_fnc_targetEvent;
        };
    };
};
