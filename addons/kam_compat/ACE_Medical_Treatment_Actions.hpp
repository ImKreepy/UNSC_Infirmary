class ACE_Medical_Treatment_Actions {
    class BasicBandage;
    class UNSCI_Medkit: BasicBandage {
        callbackSuccess = QFUNC(medkit);
    };
    class Morphine;
    class UNSCI_Stimulant: Morphine {
        callbackSuccess = QFUNC(medication);
    };
};
