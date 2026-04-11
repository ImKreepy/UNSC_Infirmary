class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    // ----- Magazine Items -----
    class UNSCI_BiofoamItem: ACE_ItemCore {
        scope = 2;
        scopeArsenal = 0;
        author = AUTHOR;
        model = "\OPTRE_Weapons\items\Biofoam.p3d";
        picture = "\OPTRE_weapons\items\icons\biofoam.paa";
        displayName = "[UNSCI] Biomedical Foam";
        descriptionShort = "Used to treat gaping wounds and deep lacerations";
        descriptionUse = "Used to treat gaping wounds and deep lacerations";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 12;
        };
    };
    class UNSCI_MediGel_CanisterItem: UNSCI_BiofoamItem {
        model = "\OPTRE_Weapons\items\Medigel.p3d";
        picture = "\ik\unsci\addons\items\pictures\unsci_medigel_canister_ca.paa";
        displayName = "[UNSCI] MediGel Canister";
        descriptionShort = "Used to treat surface level wounds.";
        descriptionUse = "Used to treat surface level wounds.";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 22;
        };
    };
    class UNSCI_MediGel_40mlItem: UNSCI_MediGel_CanisterItem {
        model = "\ik\unsci\addons\items\data\unsci_medigel_tube.p3d";
        picture = "\ik\unsci\addons\items\pictures\unsci_medigel_tube_ca.paa";
        displayName = "[UNSCI] MediGel (40ml)";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };

    // ----- Normal Items -----
    class UNSCI_Medkit: ACE_ItemCore {
        scope = 2;
        author = AUTHOR;
        picture = "\OPTRE_weapons\items\icons\medkit.paa";
        model = "\OPTRE_Weapons\items\MedKit.p3d";
        displayName = "[UNSCI] Medical Kit";
        descriptionShort = "Medical Kit to treat all combat inflicted wounds and injuries";
        descriptionUse = "Medical Kit to treat all combat inflicted wounds and injuries";
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 50;
        };
    };
    class UNSCI_MedkitPlasmaIV: ACE_ItemCore {
        scope = 0;
        author = AUTHOR;
        displayName = "[UNSCI] Plasma IV (2500ml)";
        model = "\z\ace\addons\medical_treatment\data\IVBag_1000ml.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\z\ace\addons\medical_treatment\data\IVBag_plasma_1000ml_ca.paa"};
        picture = "\z\ace\addons\medical_treatment\ui\plasmaIV_ca.paa";
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };
    class UNSCI_Injector_Stimulant: ACE_ItemCore {
        scope = 2;
        author = AUTHOR;
        picture = QPATHTOF(pictures\unsci_injector_Stimulant_ca.paa);
        model = QPATHTOF(data\unsci_injector.p3d);
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\unsci_injector_base_co.paa),QPATHTOF(data\injector\unsci_injector_Cap_co.paa),QPATHTOF(data\injector\unsci_injector_stimulant_co.paa)};
        displayName = "[UNSCI] Stimulant Autoinjector";
        descriptionShort = "Contains a cocktail of drugs that are meant to wake up and energize the user";
        descriptionUse = "Also known as a 'Stim Pack,' contains a cocktail of drugs that are meant to wake up and energize the user.";
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
            hiddenSelections[] = {"camo","camo1","camo2"};
            hiddenSelectionsTextures[] = {QPATHTOF(data\injector\unsci_injector_base_co.paa),QPATHTOF(data\injector\unsci_injector_Cap_co.paa),QPATHTOF(data\injector\unsci_injector_stimulant_co.paa)};
        };
    };
    class UNSCI_Injector_Morphine: UNSCI_Injector_Stimulant {
        picture = QPATHTOF(pictures\unsci_injector_Morphine_ca.paa);
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\unsci_injector_base_co.paa),QPATHTOF(data\injector\unsci_injector_Cap_co.paa),QPATHTOF(data\injector\unsci_injector_morphine_co.paa)};
        displayName = "[UNSCI] Morphine Autoinjector";
        descriptionShort = "Used to combat moderate to severe pain experiences";
        descriptionUse = "An analgesic used to combat moderate to severe pain experiences.";
    };
    class UNSCI_Injector_Epinephrine: UNSCI_Injector_Stimulant {
        picture = QPATHTOF(pictures\unsci_injector_Epinephrine_ca.paa);
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\unsci_injector_base_co.paa),QPATHTOF(data\injector\unsci_injector_Cap_co.paa),QPATHTOF(data\injector\unsci_injector_epinephrine_co.paa)};
        displayName = "[UNSCI] Epinephrine Autoinjector";
        descriptionShort = "Increase heart rate and counter effects given by allergic reactions";
        descriptionUse = "A drug that works on a sympathetic response to dilate the bronchi, increase heart rate and counter such effects given by allergic reactions (anaphylaxis). Used in sudden cardiac arrest scenarios with decreasing positive outcomes.";
    };
};
