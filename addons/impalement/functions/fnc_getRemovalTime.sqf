#include "..\script_component.hpp"
/*
 * Author: kymckay
 * Calculates the treatment time to remove impalements.
 *
 * Arguments:
 * 0: Medic (not used) <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Body Part <STRING>
 *
 * Return Value:
 * Treatment Time <NUMBER>
 *
 * Example:
 * [player, cursorObject, "head"] call unsci_impalement_fnc_getRemovalTime
 *
 * Public: No
 */

params ["_medic", "_patient", "_bodyPart"];
TRACE_1("fnc_getRemovalTime",_this);
_bodyPart = toLowerANSI _bodyPart;

private _impalementWounds = 0;
{
    _x params ["_woundClassID"];

    private _classIndex = _woundClassID / 10;
    private _className = ACEGVAR(medical_damage,woundClassNames) select _classIndex;

    if (IS_IMPALEMENT_OR(_className)) then {
        _impalementWounds = _impalementWounds + 1;
    };
} forEach (GET_OPEN_WOUNDS(_patient) getOrDefault [_bodyPart, []]);

_impalementWounds * GVAR(treatmentTimeRemoval)
