#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Fully heals the user.
 *
 * Arguments:
 * 0: Player (optional, default: value) <OBJECT>
 *
 * Return Value:
 * None <NONE>
 *
 * Example:
 * [_player] call unsci_items_fnc_fullHealAction
 *
 * Public: No
 */

params ["_player","_target"];
TRACE_1("fnc_fullHealAction",_this);

private _timer = missionNamespace getVariable [QGVAR(medkitRepawnTimer), 5];

[ACEQGVAR(medical_treatment,fullHealLocal), _player, _player] call CBA_fnc_targetEvent;
playSound3D ["ik\unsci\addons\treatment\sounds\unsci_medkit_use.wav", objNull, false, getPosASL _player, 1.5, 1, 50];
_target hideObjectGlobal true;

[{_this hideObjectGlobal false;}, _target, _timer] call CBA_fnc_waitAndExecute;
