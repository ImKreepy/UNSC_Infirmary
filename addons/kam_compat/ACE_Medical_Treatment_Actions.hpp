class ACE_Medical_Treatment_Actions {
    class BasicBandage;
    class UNSCI_Medkit: BasicBandage {
        callbackSuccess = QFUNC(medkit);
    };
    class UNSCI_Biofoam;
    class UNSCI_Biofoam_Pneumothorax: UNSCI_Biofoam {
        displayName = "Biofoam Chest";
        category = "airway";
        allowedSelections[] = {"Body"};
        condition = QFUNC(canBiofoamPneumothorax);
        treatmentTime = "5";
        callbackSuccess = QFUNC(biofoamPneumothorax);
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
