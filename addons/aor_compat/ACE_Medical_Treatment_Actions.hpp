class ACE_Medical_Treatment_Actions {
    class BasicBandage {
        condition = AORQFUNC(canBandage);
    };
    class UNSCI_Medkit: BasicBandage {
        condition = QFUNC(canMedkit);
    };
};
