class ACE_Medical_Treatment_Actions {
    class BasicBandage;
    class AOR_Medkit: BasicBandage {
        callbackSuccess = QEFUNC(kam_compat,medkit);
    };
    class UNSCI_Biofoam;
    class UNSCI_Biofoam_Pneumothorax: UNSCI_Biofoam {
        items[] += {"AOR_Biofoam"};
    };
};
