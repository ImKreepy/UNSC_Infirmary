class CfgVehicles
{
    // ----- Items -----
    class Item_Base_F;
    class UNSCI_Biofoam_Item: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "[UNSCI] Biomedical Foam";
        author = AUTHOR;
        vehicleClass = "Items";
        editorCategory = "UNSCI_EdCat_Items";
        editorSubcategory = "UNSCI_EdSubCat_Bandages";
        class TransportMagazines {
            class _xx_UNSCI_Biofoam {
                magazine = "UNSCI_Biofoam";
                count = 1;
            };
        };
    };
    class UNSCI_Biofoam_Prop: UNSCI_Biofoam_Item {
        vehicleClass = "Props";
        editorCategory = "UNSCI_EdCat_Props";
        model = "\OPTRE_Weapons\items\Biofoam.p3d";
    };

    class UNSCI_MediGel_Canister_Item: UNSCI_Biofoam_Item {
        displayName = "[UNSCI] MediGel Canister";
        class TransportMagazines {
            class _xx_UNSCI_Medigel_Canister {
                magazine = "UNSCI_Medigel_Canister";
                count = 1;
            };
        };
    };
    class UNSCI_MediGel_Canister_Prop: UNSCI_MediGel_Canister_Item {
        vehicleClass = "Props";
        editorCategory = "UNSCI_EdCat_Props";
        model = "\OPTRE_Weapons\items\Medigel.p3d";
    };

    class UNSCI_MediGel_40ml_Item: UNSCI_MediGel_Canister_Item {
        displayName = "[UNSCI] MediGel (40ml)";
        class TransportMagazines {
            class _xx_UNSCI_Medigel_40ml {
                magazine = "UNSCI_Medigel_40ml";
                count = 1;
            };
        };
    };
    class UNSCI_MediGel_40ml_Prop: UNSCI_MediGel_40ml_Item {
        vehicleClass = "Props";
        editorCategory = "UNSCI_EdCat_Props";
        model = "\ik\unsci\addons\items\data\unsci_medigel_tube.p3d";
    };

    class UNSCI_Medkit_Item: UNSCI_Biofoam_Item {
        scope = 2;
        scopeCurator = 2;
        displayName = "[UNSCI] Medical Kit";
        author = AUTHOR;
        class TransportItems {
            class _xx_UNSCI_Medkit {
                name = "UNSCI_Medkit";
                count = 1;
            };
        };
    };
    class UNSCI_Medkit_Prop: UNSCI_Medkit_Item {
        vehicleClass = "Props";
        editorCategory = "UNSCI_EdCat_Props";
        model = "\OPTRE_Weapons\items\MedKit.p3d";
    };

    class UNSCI_MedkitPlasmaIV_Item: Item_Base_F {
        scope = 0;
        scopeCurator = 0;
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
    class UNSCI_Injector_Stimulant_Item: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "[UNSCI] Stimulant Autoinjector";
        icon = QPATHTOF(icons\unsci_injector_icon_ca.paa);
        author = AUTHOR;
        vehicleClass = "Items";
        editorCategory = "UNSCI_EdCat_Items";
        editorSubcategory = "UNSCI_EdSubCat_Medication";
        class TransportItems {
            class _xx_UNSCI_Injector_Stimulant {
                name = "UNSCI_Injector_Stimulant";
                count = 1;
            };
        };
    };
    class UNSCI_Injector_Stimulant_Prop: UNSCI_Injector_Stimulant_Item {
        vehicleClass = "Props";
        editorCategory = "UNSCI_EdCat_Props";
        model = QPATHTOF(data\unsci_injector.p3d);
    };

    class UNSCI_Injector_Morphine_Item: UNSCI_Injector_Stimulant_Item {
        displayName = "[UNSCI] Morphine Autoinjector";
        class TransportItems {
            class _xx_UNSCI_Injector_Morphine {
                name = "UNSCI_Injector_Morphine";
                count = 1;
            };
        };
    };
    class UNSCI_Injector_Morphine_Prop: UNSCI_Injector_Stimulant_Prop {
        displayName = "[UNSCI] Morphine Autoinjector";
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\unsci_injector_base_co.paa),QPATHTOF(data\injector\unsci_injector_Cap_co.paa),QPATHTOF(data\injector\unsci_injector_morphine_co.paa)};
    };

    class UNSCI_Injector_Epinephrine_Item: UNSCI_Injector_Stimulant_Item {
        displayName = "[UNSCI] Epinephrine Autoinjector";
        class TransportItems {
            class _xx_UNSCI_Injector_Epinephrine {
                name = "UNSCI_Injector_Epinephrine";
                count = 1;
            };
        };
    };
    class UNSCI_Injector_Epinephrine_Prop: UNSCI_Injector_Stimulant_Prop {
        displayName = "[UNSCI] Epinephrine Autoinjector";
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\unsci_injector_base_co.paa),QPATHTOF(data\injector\unsci_injector_Cap_co.paa),QPATHTOF(data\injector\unsci_injector_epinephrine_co.paa)};
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
