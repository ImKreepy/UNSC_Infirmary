class CfgVehicles
{
    // ----- Items -----
    class Item_Base_F;
    class UNSCI_Biofoam_Item: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "[UNSCI] Biofoam";
        author = AUTHOR;
        vehicleClass = "Items";
        class TransportItems {
            class _xx_UNSCI_Biofoam {
                name = "UNSCI_Biofoam";
                count = 1;
            };
        };
    };
    class UNSCI_Medigel_Item: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "[UNSCI] Medigel";
        author = AUTHOR;
        vehicleClass = "Items";
        class TransportItems {
            class _xx_UNSCI_Medigel {
                name = "UNSCI_Medigel";
                count = 1;
            };
        };
    };
    class UNSCI_Medkit_Item: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "[UNSCI] Medkit";
        author = AUTHOR;
        vehicleClass = "Items";
        class TransportItems {
            class _xx_UNSCI_Medkit {
                name = "UNSCI_Medkit";
                count = 1;
            };
        };
    };
    class UNSCI_MedkitPlasmaIV_Item: Item_Base_F {
        scope = 1;
        scopeCurator = 1;
        displayName = "[UNSCI] Plasma IV (2500ml)";
        author = AUTHOR;
        vehicleClass = "Items";
        class TransportItems {
            class _xx_UNSCI_MedkitPlasmaIV {
                name = "UNSCI_MedkitPlasmaIV";
                count = 1;
            };
        };
    };

    // ----- Litter -----
    class ACE_MedicalLitterBase;
    class UNSCI_Biofoam_litter: ACE_MedicalLitterBase {
        model = "\OPTRE_ACE_Compat\data\BiofoamLitter.p3d";
    };
    class UNSCI_Medigel_litter: ACE_MedicalLitterBase {
        model = "\OPTRE_Weapons\Items\Medigel.p3d";
    };
    class UNSCI_Medkit_litter: ACE_MedicalLitterBase {
        model = "\OPTRE_Weapons\Items\MedKit.p3d";
    };
};
