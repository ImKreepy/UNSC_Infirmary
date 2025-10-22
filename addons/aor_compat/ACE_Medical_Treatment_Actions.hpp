class ACE_Medical_Treatment_Actions {
    class BasicBandage {
        condition = QUOTE(aor_medical_ace_compat_bandage);
    };
    delete UNSCI_RemoveBlamite;
    delete UNSCI_RemoveSpike;
    delete UNSCI_Biofoam;
    delete UNSCI_Medigel;
    delete UNSCI_Medkit;

    class AOR_Biofoam: BasicBandage {
        items[] = {"UNSCI_Biofoam"};
    };
    class AOR_Medigel: AOR_Biofoam {
        items[] = {"UNSCI_MediGel_Canister","UNSCI_MediGel_40ml"};
    };
    class AOR_Medkit: AOR_Biofoam {
        items[] = {"UNSCI_Medkit"};
    };
};
