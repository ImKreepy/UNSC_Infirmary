#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Removes impalement and replaces it with a puncture wound.
 *
 * Arguments:
 * 0: Patient <OBJECT>
 * 1: Body Part <STRING>
 * 2: Wound Array, will close first wound on body part if empty <ARRAY> (default: [])
 *
 * Return Value:
 * Wound was stitched <BOOL>
 *
 * Example:
 * [player, "head"] call jc_medical_fnc_removeImpalement
 *
 * Public: No
 */

params ["_medic","_patient", "_bodyPart"];
TRACE_1("fnc_removeImpalement",_this);
private _openWounds = GET_OPEN_WOUNDS(_patient);
private _openWoundsOnPart = _openWounds getOrDefault [_bodyPart, []];

private _woundIndex = _openWoundsOnPart findIf {
    _x params ["_woundClassID"];
    private _classIndex = _woundClassID / 10;
    private _className = ACEGVAR(medical_damage,woundClassNames) select _classIndex;
    IS_IMPALEMENT_OR(_className);
};

private _wound = _openWoundsOnPart select _woundIndex;
_wound params ["","_amountOf","","_damage"];
private _addDamage = _damage * _amountOf;
_openWoundsOnPart deleteAt _woundIndex;

_patient setVariable [ACEQGVAR(medical,openWounds), _openWounds, true];

[_patient, _addDamage, _bodyPart, "RemovedImpalement", _medic] call ACEFUNC(medical,addDamageToUnit);

true
