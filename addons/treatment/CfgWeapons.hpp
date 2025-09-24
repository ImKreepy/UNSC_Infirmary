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
        descriptionShort = "Used to treat surface level wounds and radiation burns";
        descriptionUse = "Used to treat surface level wounds and radiation burns";
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
};
