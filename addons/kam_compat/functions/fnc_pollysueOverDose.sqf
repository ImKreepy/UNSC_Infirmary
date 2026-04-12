#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Handles Polypseudomorphine over dose.
 *
 * Arguments:
 * 0: Patient <OBJECT>
 *
 * Return Value:
 * None <NONE>
 *
 * Example:
 * [player] call unsci_kam_compat_fnc_pollysueOverDose
 *
 * Public: No
 */

params ["_patient"];
TRACE_1("fnc_pollysueOverDose",_this);

_patient setVariable [QEGVAR(surgery,sedated), true, true];
[_patient, true] call ACEFUNC(medical,setUnconscious);
