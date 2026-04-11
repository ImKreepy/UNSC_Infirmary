class CfgMagazines {
    class CA_Magazine;
    class UNSCI_Biofoam: CA_Magazine {
        scope = 2;
        author = AUTHOR;
        displayName = "[UNSCI] Biomedical Foam";
        model = "\OPTRE_Weapons\items\Biofoam.p3d";
        picture = "\OPTRE_weapons\items\icons\biofoam.paa";
        descriptionShort = "Used to treat gaping wounds and deep lacerations";
        descriptionUse = "Used to treat gaping wounds and deep lacerations";
        ACE_isMedicalItem = 1;
        ACE_asItem = 1;
        count = 10;
        mass = 12;
    };
    class UNSCI_MediGel_Canister: UNSCI_Biofoam {
        displayName = "[UNSCI] MediGel Canister";
        model = "\OPTRE_Weapons\items\Medigel.p3d";
        picture = "\ik\unsci\addons\items\pictures\unsci_medigel_canister_ca.paa";
        descriptionShort = "Used to treat surface level wounds";
        descriptionUse = "Used to treat surface level wounds";
        count = 50;
        mass = 22;
    };
    class UNSCI_MediGel_40ml: UNSCI_MediGel_Canister {
        displayName = "[UNSCI] MediGel (40ml)";
        model = "\ik\unsci\addons\items\data\unsci_medigel_tube.p3d";
        picture = "\ik\unsci\addons\items\pictures\unsci_medigel_tube_ca.paa";
        count = 4;
        mass = 2;
    };
};
