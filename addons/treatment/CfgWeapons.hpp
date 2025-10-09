class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class UNSCI_Biofoam: ACE_ItemCore {
        scope = 2;
        author = AUTHOR;
        model = "\OPTRE_Weapons\items\Biofoam.p3d";
        picture = "\OPTRE_weapons\items\icons\biofoam.paa";
        displayName = "[UNSCI] Biofoam";
        descriptionShort = "Used to treat gaping wounds and deep lacerations";
        descriptionUse = "Used to treat gaping wounds and deep lacerations";
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.6;
        };
    };
    class UNSCI_Medigel: ACE_ItemCore {
        scope = 2;
        author = AUTHOR;
        model = "\OPTRE_Weapons\items\Medigel.p3d";
        picture = "\OPTRE_weapons\items\icons\biofoam.paa";
        displayName = "[UNSCI] Medigel";
        descriptionShort = "Used to treat surface level wounds.";
        descriptionUse = "Used to treat surface level wounds.";
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.6;
        };
    };
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
            mass = 0.6;
        };
    };
    class UNSCI_MedkitPlasmaIV: ACE_ItemCore {
        scope = 1;
        author = AUTHOR;
        displayName = "[UNSCI] Plasma IV (2500ml)";
        model = "\z\ace\addons\medical_treatment\data\IVBag_1000ml.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\z\ace\addons\medical_treatment\data\IVBag_plasma_1000ml_ca.paa"};
        picture = "\z\ace\addons\medical_treatment\ui\plasmaIV_ca.paa";
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };
    class UNSCI_Injector_Stimulant: ACE_ItemCore {
        scope = 2;
        author = AUTHOR;
        picture = QPATHTOF(data\injector\unsci_injector_stimulant_icon_ca.paa);
        model = QPATHTOF(data\injector\unsci_injector.p3d);
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\unsci_injector_base_co.paa),QPATHTOF(data\injector\unsci_injector_Cap_co.paa),QPATHTOF(data\injector\unsci_injector_stimulant_co.paa)};
        displayName = "[UNSCI] Stimulant Autoinjector";
        descriptionShort = "Stimulant Autoinjector, also known as a 'Stim Pack,' gives contains a cocktail of drugs that are meant to wake up and energize the user";
        descriptionUse = "Contains a cocktail of drugs that are meant to wake up and energize the user.";
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
            hiddenSelections[] = {"camo","camo1","camo2"};
            hiddenSelectionsTextures[] = {QPATHTOF(data\injector\unsci_injector_base_co.paa),QPATHTOF(data\injector\unsci_injector_Cap_co.paa),QPATHTOF(data\injector\unsci_injector_stimulant_co.paa)};
        };
    };
    class UNSCI_Injector_Morphine: UNSCI_Injector_Stimulant {
        picture = QPATHTOF(data\injector\unsci_injector_Morphine_icon_ca.paa);
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\unsci_injector_base_co.paa),QPATHTOF(data\injector\unsci_injector_Cap_co.paa),QPATHTOF(data\injector\unsci_injector_morphine_co.paa)};
        displayName = "[UNSCI] Morphine Autoinjector";
        descriptionShort = "Used to combat moderate to severe pain experiences";
        descriptionUse = "An analgesic used to combat moderate to severe pain experiences.";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        };
    };
    class UNSCI_Injector_Epinephrine: UNSCI_Injector_Stimulant {
        picture = QPATHTOF(data\injector\unsci_injector_Epinephrine_icon_ca.paa);
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\unsci_injector_base_co.paa),QPATHTOF(data\injector\unsci_injector_Cap_co.paa),QPATHTOF(data\injector\unsci_injector_epinephrine_co.paa)};
        displayName = "[UNSCI] Epinephrine Autoinjector";
        descriptionShort = "Increase heart rate and counter effects given by allergic reactions";
        descriptionUse = "A drug that works on a sympathetic response to dilate the bronchi, increase heart rate and counter such effects given by allergic reactions (anaphylaxis). Used in sudden cardiac arrest scenarios with decreasing positive outcomes.";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        };
    };
};
