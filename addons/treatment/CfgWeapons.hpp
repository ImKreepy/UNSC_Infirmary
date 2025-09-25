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
};
