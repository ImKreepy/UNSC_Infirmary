class ACE_Medical_Treatment_Actions {
    class BasicBandage;
    class UNSCI_Medkit: BasicBandage {
        callbackSuccess = QFUNC(medkit);
    };
    class UNSCI_Biofoam;
    class UNSCI_Biofoam_Pneumothorax: UNSCI_Biofoam {
        displayName = CSTRING(BiofoamPTX_DisplayName);
        category = "airway";
        allowedSelections[] = {"Body"};
        items[] += {"OPTRE_Biofoam"};
        condition = QFUNC(canBiofoamPTX);
        treatmentTime = "5";
        callbackSuccess = QFUNC(biofoamPTX);
    };
    class Morphine;
    class UNSCI_Pollysue_30u: Morphine {
        displayName = CSTRING(Polypseudomorphine_30u_ActionDisplayName);
    };
    class UNSCI_Pollysue_100u: UNSCI_Pollysue_30u {
        displayName = CSTRING(Polypseudomorphine_100u_ActionDisplayName);
        items[] = {"UNSCI_Syringe_Pollysue_100u"};
    };
    class NPWT: BasicBandage {
        condition = QFUNC(canNPWT);
        treatmentTime = QFUNC(getNPWTTreatmentTime);
        callbackProgress = QFUNC(npwtTreatmentProgress);
    };
};
