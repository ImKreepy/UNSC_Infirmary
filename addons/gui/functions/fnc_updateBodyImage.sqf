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

private _openWounds = GET_OPEN_WOUNDS(_target);
private _bodyPart = ALL_BODY_PARTS select _selectionN;

{
    private _woundClassID = _x select 0;
    private _classIndex = _woundClassID / 10;
    private _className = ACEGVAR(medical_damage,woundClassNames) select _classIndex;
    {
        _x params [["_blamiteIDC",-1],["_spikeIDC",-1]];

        if (_blamiteIDC isNotEqualTo -1) then {
            private _hasBlamiteWound = _className isEqualTo "UNSCI_BlamiteWound";
            private _ctrlBlamiteWound = _ctrlGroup controlsGroupCtrl _blamiteIDC;
            _ctrlBlamiteWound ctrlShow _hasBlamiteWound;
        };

        if (_spikeIDC isNotEqualTo -1) then {
            private _hasSpikeWound = _className isEqualTo "UNSCI_SpikeWound";
            private _ctrlSpikeWound = _ctrlGroup controlsGroupCtrl _spikeIDC;
            _ctrlSpikeWound ctrlShow _hasSpikeWound;
        };

    } forEach [
        [IDC_BODY_HEAD_BL,IDC_BODY_HEAD_SP],
        [IDC_BODY_TORSO_BL,IDC_BODY_TORSO_SP],
        [IDC_BODY_ARMLEFT_BL,IDC_BODY_ARMLEFT_SP],
        [IDC_BODY_ARMRIGHT_BL,IDC_BODY_ARMRIGHT_SP],
        [IDC_BODY_LEGLEFT_BL,IDC_BODY_LEGLEFT_SP],
        [IDC_BODY_LEGRIGHT_BL,IDC_BODY_LEGRIGHT_SP]
    ];
} forEach (_openWounds get _bodyPart);
