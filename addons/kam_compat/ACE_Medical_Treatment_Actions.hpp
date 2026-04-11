class ACE_Medical_Treatment_Actions {
    class BasicBandage;
    class UNSCI_Medkit: BasicBandage {
        callbackSuccess = QFUNC(medkit);
    };
    class UNSCI_Biofoam;
    class UNSCI_Biofoam_Pneumothorax: UNSCI_Biofoam {
        displayName = "Biofoam PTX";
        category = "airway";
        allowedSelections[] = {"Body"};
        condition = QFUNC(canBiofoamPTX);
        treatmentTime = "5";
        callbackSuccess = QFUNC(biofoamPTX);
    };
    class Morphine;
    class UNSCI_Stimulant: Morphine {
        callbackSuccess = QFUNC(medication);
    };
    class NPWT: BasicBandage {
        condition = QFUNC(canNPWT);
        treatmentTime = QFUNC(getNPWTTreatmentTime);
        callbackProgress = QFUNC(npwtTreatmentProgress);
    };
};
