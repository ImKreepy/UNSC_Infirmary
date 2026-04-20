class ACE_Medical_Treatment_Actions {
    class AOR_Biofoam;
    class AOR_Medkit: AOR_Biofoam {
        callbackSuccess = QFUNC(medkit);
    };
    class UNSCI_Biofoam;
    class UNSCI_Biofoam_Pneumothorax: UNSCI_Biofoam {
        items[] += {"AOR_Biofoam"};
    };
};
