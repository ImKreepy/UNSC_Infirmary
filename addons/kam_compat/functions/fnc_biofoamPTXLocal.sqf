#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Handles healing Deep Penetrating Injury's local.
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 *
 * Return Value:
 * None <NONE>
 *
 * Example:
 * [player, cursorObject] call unsci_kam_compat_fnc_biofoamPTXLocal
 *
 * Public: No
 */

params ["_medic","_patient"];
TRACE_1("fnc_biofoamPTXLocal",_this);

_patient setVariable [KAMQGVAR(breathing,deepPenetratingInjury), false];
_patient setVariable [KAMQGVAR(breathing,pneumothorax), 0];
_patient setVariable [QGVAR(biofoamHealPTX), true, false];
