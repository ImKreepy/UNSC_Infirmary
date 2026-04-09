#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Updates Blamite on Limbs variable.
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Selection <NUMBER>
 *
 * Return Value:
 * None <NONE>
 *
 * Example:
 * [player, 0] call unsci_gui_fnc_getBlamiteWoundArray
 *
 * Public: No
 */

params ["_target", "_selectionN"];
TRACE_1("fnc_getBlamiteWoundArray",_this);

private _array = [0,0,0,0,0,0];
{
    private _hasWound = 0;
    {
        private _woundClassID = _x select 0;
        private _classIndex = _woundClassID / 10;
        private _className = ACEGVAR(medical_damage,woundClassNames) select _classIndex;
        if (_className isEqualTo "UNSCI_BlamiteWound") exitWith {
            _hasWound = 1
        };

    } forEach (GET_OPEN_WOUNDS(_target) getOrDefault [_x, []]);

    _array set [_forEachIndex, _hasWound];
} forEach ALL_BODY_PARTS;

_array
