#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Update medical menu GUI body image.
 *
 * Arguments:
 * 0: Body image controls group <CONTROL>
 * 1: Target <OBJECT>
 * 2: Body part index <NUMBER>
 *
 * Return Value:
 * None <NONE>
 *
 * Example:
 * [CONTROL, _target, 0] call unsci_gui_fnc_updateBodyImage
 *
 * Public: No
 */

params ["_ctrlGroup", "_target", "_selectionN"];
TRACE_1("fnc_updateBodyImage",_this);

private _blamiteArray = [_target] call FUNC(getBlamiteWoundArray);
private _ctrlBlamiteHead = _ctrlGroup controlsGroupCtrl IDC_BODY_HEAD_BL;
private _ctrlBlamiteTorso = _ctrlGroup controlsGroupCtrl IDC_BODY_TORSO_BL;
private _ctrlBlamiteArmLeft = _ctrlGroup controlsGroupCtrl IDC_BODY_ARMLEFT_BL;
private _ctrlBlamiteArmRight = _ctrlGroup controlsGroupCtrl IDC_BODY_ARMRIGHT_BL;
private _ctrlBlamiteLegLeft = _ctrlGroup controlsGroupCtrl IDC_BODY_LEGLEFT_BL;
private _ctrlBlamiteLegRight = _ctrlGroup controlsGroupCtrl IDC_BODY_LEGRIGHT_BL;

private _spikeArray = [_target] call FUNC(getSpikeWoundArray);
private _ctrlSpikeHead = _ctrlGroup controlsGroupCtrl IDC_BODY_HEAD_SP;
private _ctrlSpikeTorso = _ctrlGroup controlsGroupCtrl IDC_BODY_TORSO_SP;
private _ctrlSpikeArmLeft = _ctrlGroup controlsGroupCtrl IDC_BODY_ARMLEFT_SP;
private _ctrlSpikeArmRight = _ctrlGroup controlsGroupCtrl IDC_BODY_ARMRIGHT_SP;
private _ctrlSpikeLegLeft = _ctrlGroup controlsGroupCtrl IDC_BODY_LEGLEFT_SP;
private _ctrlSpikeLegRight = _ctrlGroup controlsGroupCtrl IDC_BODY_LEGRIGHT_SP;

{
    _x params ["_ctrlBlamite","_ctrlSpike"];

    private _hasBlamite = _blamiteArray select _forEachIndex > 0;
    _ctrlBlamite ctrlShow _hasBlamite;
    
    private _hasSpike = _spikeArray select _forEachIndex > 0;
    _ctrlSpike ctrlShow _hasSpike;

} forEach [
    [_ctrlBlamiteHead,_ctrlSpikeHead],
    [_ctrlBlamiteTorso,_ctrlSpikeTorso],
    [_ctrlBlamiteArmRight,_ctrlSpikeArmRight],
    [_ctrlBlamiteArmLeft,_ctrlSpikeArmLeft],
    [_ctrlBlamiteLegRight,_ctrlSpikeLegRight],
    [_ctrlBlamiteLegLeft,_ctrlSpikeLegLeft]
];
