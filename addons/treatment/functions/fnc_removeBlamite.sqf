#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Removes Blamite and replaces it with a puncture wound.
 *
 * Arguments:
 * 0: Patient <OBJECT>
 * 1: Body Part <STRING>
 * 2: Wound Array, will close first wound on body part if empty <ARRAY> (default: [])
 *
 * Return Value:
 * Wound was removed <BOOL>
 *
 * Example:
 * [player, "head"] call unsci_treatment_fnc_removeBlamite
 *
 * Public: No
 */

params ["_patient", "_bodyPart"];
TRACE_1("fnc_removeBlamite",_this);
private _openWounds = GET_OPEN_WOUNDS(_patient);
private _openWoundsOnPart = _openWounds getOrDefault [_bodyPart, []];

private _woundIndex = _openWoundsOnPart findIf {
    private _woundClassID = _x select 0;
    private _classIndex = _woundClassID / 10;
    private _className = ACEGVAR(medical_damage,woundClassNames) select _classIndex;
    _className isEqualTo "BlamiteWound";
};

private _wound = _openWoundsOnPart select _woundIndex;
_wound params ["","_amountOf","","_damage"];
private _damageToAdd = _damage;
private _amountToAdd = _amountOf;
_openWoundsOnPart deleteAt _woundIndex;

_patient setVariable [ACEQGVAR(medical,openWounds), _openWounds, true];

for "_i" from 1 to _amountToAdd do {
    [_patient, _damageToAdd, _bodyPart, "RemovedImpalement"] call ACEFUNC(medical,addDamageToUnit);
};

true
