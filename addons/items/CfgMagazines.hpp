class CfgMagazines {
    class CA_Magazine;
    class UNSCI_Biofoam: CA_Magazine {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(Biofoam_DisplayName);
        model = "\OPTRE_Weapons\items\Biofoam.p3d";
        picture = "\OPTRE_weapons\items\icons\biofoam.paa";
        descriptionShort = CSTRING(Biofoam_DescriptionShort);
        descriptionUse = CSTRING(Biofoam_DescriptionUse);
        ACE_isMedicalItem = 1;
        ACE_asItem = 1;
        count = 10;
        mass = 12;
    };
    class UNSCI_MediGel_Canister: UNSCI_Biofoam {
        displayName = CSTRING(MediGel_DisplayName);
        model = "\OPTRE_Weapons\items\Medigel.p3d";
        picture = "\ik\unsci\addons\items\pictures\unsci_medigel_canister_ca.paa";
        descriptionShort = CSTRING(MediGel_DescriptionShort);
        descriptionUse = CSTRING(MediGel_DescriptionUse);
        count = 50;
        mass = 22;
    };
    class UNSCI_MediGel_40ml: UNSCI_MediGel_Canister {
        displayName = CSTRING(MediGel_40ml_DisplayName);
        model = "\ik\unsci\addons\items\data\unsci_medigel_tube.p3d";
        picture = "\ik\unsci\addons\items\pictures\unsci_medigel_tube_ca.paa";
        count = 4;
        mass = 2;
    };
};
