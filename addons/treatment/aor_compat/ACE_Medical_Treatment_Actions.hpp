class ACE_Medical_Treatment_Actions {
    class BasicBandage {
        condition = AORQFUNC(canBandage);
    };
    delete UNSCI_RemoveBlamite;
    delete UNSCI_Biofoam;
    delete UNSCI_Medigel;
    delete UNSCI_Medkit;

    class AOR_Biofoam: BasicBandage {
        displayName = "Biomedical Foam";
        displayNameProgress = "Injecting Biomedical Foam...";
        items[] = {"UNSCI_Biofoam","AOR_Biofoam"};
    };
    class AOR_Medigel: AOR_Biofoam {
        displayName = "MediGel";
        displayNameProgress = "Applying MediGel...";
        items[] = {"UNSCI_MediGel_Canister","UNSCI_MediGel_40ml","AOR_Medigel"};
    };
    class AOR_Medkit: AOR_Biofoam {
        displayName = "Medical Kit";
        displayNameProgress = "Using Medical Kit...";
        items[] = {"UNSCI_Medkit","AOR_Medkit"};
    };
};
