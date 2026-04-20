class RscControlsGroupNoScrollbars;

class ACEGVAR(medical_gui,BodyImage): RscControlsGroupNoScrollbars {
    class controls {
        class Torso_ChestSeal;
        class Torso_Biofoam: Torso_ChestSeal {
            idc = IDC_BODY_TORSO_BIOFOAM;
            text = QPATHTOEF(gui,data\body_image\wounds\unsci_torso_biofoam.paa);
        };
    };
};
