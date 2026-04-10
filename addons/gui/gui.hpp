class RscControlsGroupNoScrollbars;

class ACEGVAR(medical_gui,BodyImage): RscControlsGroupNoScrollbars {
    class controls {
        class Background;
        class ArmLeftBL: Background {
            idc = IDC_BODY_ARMLEFT_BL;
            text = QPATHTOF(data\body_image\unsci_armLeft_bl.paa);
            colorText[] = {1, 0, 0.6, 1};
            show = 0;
        };
        class ArmRightBL: ArmLeftBL {
            idc = IDC_BODY_ARMRIGHT_BL;
            text = QPATHTOF(data\body_image\unsci_armRight_bl.paa);
        };
        class LegLeftBL: ArmLeftBL {
            idc = IDC_BODY_LEGLEFT_BL;
            text = QPATHTOF(data\body_image\unsci_legLeft_bl.paa);
        };
        class LegRightBL: ArmLeftBL {
            idc = IDC_BODY_LEGRIGHT_BL;
            text = QPATHTOF(data\body_image\unsci_legRight_bl.paa);
        };
        class HeadBL: ArmLeftBL {
            idc = IDC_BODY_HEAD_BL;
            text = QPATHTOF(data\body_image\unsci_head_bl.paa);
        };
        class TorsoBL: ArmLeftBL {
            idc = IDC_BODY_TORSO_BL;
            text = QPATHTOF(data\body_image\unsci_torso_bl.paa);
        };
        
        class ArmLeftSP: Background {
            idc = IDC_BODY_ARMLEFT_SP;
            text = QPATHTOF(data\body_image\unsci_armLeft_sp.paa);
            colorText[] = {1, 0, 0, 1};
            show = 0;
        };
        class ArmRightSP: ArmLeftSP {
            idc = IDC_BODY_ARMRIGHT_SP;
            text = QPATHTOF(data\body_image\unsci_armRight_sp.paa);
        };
        class LegLeftSP: ArmLeftSP {
            idc = IDC_BODY_LEGLEFT_SP;
            text = QPATHTOF(data\body_image\unsci_legLeft_sp.paa);
        };
        class LegRightSP: ArmLeftSP {
            idc = IDC_BODY_LEGRIGHT_SP;
            text = QPATHTOF(data\body_image\unsci_legRight_sp.paa);
        };
        class HeadSP: ArmLeftSP {
            idc = IDC_BODY_HEAD_SP;
            text = QPATHTOF(data\body_image\unsci_head_sp.paa);
        };
        class TorsoSP: ArmLeftSP {
            idc = IDC_BODY_TORSO_SP;
            text = QPATHTOF(data\body_image\unsci_torso_sp.paa);
        };
    };
};
