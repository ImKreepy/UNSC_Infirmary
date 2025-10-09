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
    };
    class Medication {
        class UNSCI_Stimulant {
            alphaFactor = -0.2;
            opioidRelief = 0.1;
        };
    };
};
