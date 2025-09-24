#include "..\script_component.hpp"
/*
 * Author: Im Kreepy
 * Calculates the treatment time for a Medical Kit.
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
 * [player, cursorObject, "head"] call unsci_treatment_fnc_getMedkitTreatmentTime
 *
 * Public: No
 */

params ["_medic","_patient", ""];
TRACE_1("fnc_getMedkitTreatmentTime",_this);
private _openWounds = GET_OPEN_WOUNDS(_patient) get _bodyPart;

private _wounds = 0;
{
    private _bodyPart = _x;
    private _daCount = count _openWounds;
    _wounds = _wounds + _daCount;
} forEach ALL_SELECTIONS;

_wounds * GVAR(treatmentTime_medkit)
