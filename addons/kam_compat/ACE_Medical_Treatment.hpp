class ACE_Medical_Treatment {
    class Bandaging {
        class FieldDressing;
        class BloodClotMinor: FieldDressing {
            KILL_WOUND_TYPES;
        };
        class BloodClotMedium: FieldDressing {
            KILL_WOUND_TYPES;
        };
        class BloodClotLarge: FieldDressing {
            KILL_WOUND_TYPES;
        };

        class BloodClotMinorTXA: BloodClotMinor {
            KILL_WOUND_TYPES;
        };
        class BloodClotMediumTXA: BloodClotMedium {
            KILL_WOUND_TYPES;
        };
        class BloodClotLargeTXA: BloodClotLarge {
            KILL_WOUND_TYPES;
        };

        class BloodClotMinorEACA: BloodClotMinor {
            KILL_WOUND_TYPES;
        };
        class BloodClotMediumEACA: BloodClotMedium {
            KILL_WOUND_TYPES;
        };
        class BloodClotLargeEACA: BloodClotLarge {
            KILL_WOUND_TYPES;
        };

        class Dressing: FieldDressing {
            KILL_WOUND_TYPES;
        };
    };
    class Medication {
        class UNSCI_Stimulant {
            alphaFactor = -0.2;
            opioidRelief = 0.4;
            opioidEffect = 0.1;
        };
        class UNSCI_Pollysue {
            alphaFactor = -0.2;
            opioidRelief = 0.2;
            opioidEffect = 0.12;
            maxDoseDeviation = 1;
            onOverDose = QUOTE(_patient call FUNC(pollysueOverDose));
        };
    };
};
