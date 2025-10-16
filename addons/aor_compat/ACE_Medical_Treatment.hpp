class ACE_Medical_Treatment {
    class Bandaging {
        class BasicBandage {
            KILL_WOUND_TYPES;
        };
        class FieldDressing {
            KILL_WOUND_TYPES;
            // ----- UNSCI Wound Treatments -----
            delete UNSCI_PlasmaBurn;
            delete UNSCI_PlasmaBurnMinor;
            delete UNSCI_PlasmaBurnMedium;
            delete UNSCI_PlasmaBurnLarge;

            delete UNSCI_PlasmaAvulsion;
            delete UNSCI_PlasmaAvulsionMinor;
            delete UNSCI_PlasmaAvulsionMedium;
            delete UNSCI_PlasmaAvulsionLarge;
        };

        class UNSCI_Biofoam : FieldDressing {
            // ----- UNSCI Wound Treatments -----
            delete UNSCI_PlasmaBurn;
            delete UNSCI_PlasmaBurnMinor;
            delete UNSCI_PlasmaBurnMedium;
            delete UNSCI_PlasmaBurnLarge;

            delete UNSCI_PlasmaAvulsion;
            delete UNSCI_PlasmaAvulsionMinor;
            delete UNSCI_PlasmaAvulsionMedium;
            delete UNSCI_PlasmaAvulsionLarge;

            // ----- AOR Wound Treatments -----
            class AOR_PlasmaBurn {
                effectiveness = 1;
                reopeningChance = 0.2;
                reopeningMinDelay = 500;
                reopeningMaxDelay = 1000;
            };
            class AOR_PlasmaBurnMinor: AOR_PlasmaBurn {
                effectiveness = 1;
            };
            class AOR_PlasmaBurnMedium: AOR_PlasmaBurn {
                effectiveness = 0.8;
            };
            class AOR_PlasmaBurnLarge: AOR_PlasmaBurn {
                effectiveness = 0.65;
            };

            class AOR_RadiationBurn {
                effectiveness = 1;
                reopeningChance = 0.2;
                reopeningMinDelay = 500;
                reopeningMaxDelay = 1000;
            };
            class AOR_RadiationBurnMinor: AOR_RadiationBurn {
                effectiveness = 1;
            };
            class AOR_RadiationBurnMedium: AOR_RadiationBurn {
                effectiveness = 0.8;
            };
            class AOR_RadiationBurnLarge: AOR_RadiationBurn {
                effectiveness = 0.65;
            };

            class AOR_PlasmaAvulsion {
                effectiveness = 5;
                reopeningChance = 0.3;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 1500;
            };
            class AOR_PlasmaAvulsionMinor: AOR_PlasmaAvulsion {
                effectiveness = 5;
            };
            class AOR_PlasmaAvulsionMedium: AOR_PlasmaAvulsion {
                effectiveness = 4;
            };
            class AOR_PlasmaAvulsionLarge: AOR_PlasmaAvulsion {
                effectiveness = 3;
            };

            class AOR_PlasmaPenetrating {
                effectiveness = 4;
                reopeningChance = 0.4;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 2000;
            };
            class AOR_PlasmaPenetratingMinor: AOR_PlasmaPenetrating {
                effectiveness = 3;
            };
            class AOR_PlasmaPenetratingMedium: AOR_PlasmaPenetrating {
                effectiveness = 2;
            };
            class AOR_PlasmaPenetratingLarge: AOR_PlasmaPenetrating {
                effectiveness = 1.5;
            };
            
            class AOR_CauterizedPuncture {
                effectiveness = 4;
                reopeningChance = 0.3;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 3000;
            };
            class AOR_CauterizedPunctureMinor: AOR_CauterizedPuncture {
                effectiveness = 3;
            };
            class AOR_CauterizedPunctureMedium: AOR_CauterizedPuncture {
                effectiveness = 2;
            };
            class AOR_CauterizedPunctureLarge: AOR_CauterizedPuncture {
                effectiveness = 1.5;
            };
        };

        class UNSCI_Medigel : FieldDressing {
            // ----- UNSCI Wound Treatments -----
            delete UNSCI_PlasmaBurn;
            delete UNSCI_PlasmaBurnMinor;
            delete UNSCI_PlasmaBurnMedium;
            delete UNSCI_PlasmaBurnLarge;

            delete UNSCI_PlasmaAvulsion;
            delete UNSCI_PlasmaAvulsionMinor;
            delete UNSCI_PlasmaAvulsionMedium;
            delete UNSCI_PlasmaAvulsionLarge;
            
            // ----- AOR Wound Treatments -----
            class AOR_PlasmaBurn {
                effectiveness = 5;
                reopeningChance = 0.6;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 150;
            };
            class AOR_PlasmaBurnMinor: AOR_PlasmaBurn {
                effectiveness = 5;
            };
            class AOR_PlasmaBurnMedium: AOR_PlasmaBurn {
                effectiveness = 4;
            };
            class AOR_PlasmaBurnLarge: AOR_PlasmaBurn {
                effectiveness = 3;
            };
            
            class AOR_RadiationBurn {
                effectiveness = 5;
                reopeningChance = 0.6;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 150;
            };
            class AOR_RadiationBurnMinor: AOR_RadiationBurn {
                effectiveness = 5;
            };
            class AOR_RadiationBurnMedium: AOR_RadiationBurn {
                effectiveness = 4;
            };
            class AOR_RadiationBurnLarge: AOR_RadiationBurn {
                effectiveness = 3;
            };

            class AOR_PlasmaAvulsion {
                effectiveness = 0.4;
                reopeningChance = 1;
                reopeningMinDelay = 50;
                reopeningMaxDelay = 100;
            };
            class AOR_PlasmaAvulsionMinor: AOR_PlasmaAvulsion {
                effectiveness = 0.4;
            };
            class AOR_PlasmaAvulsionMedium: AOR_PlasmaAvulsion {
                effectiveness = 0.25;
            };
            class AOR_PlasmaAvulsionLarge: AOR_PlasmaAvulsion {
                effectiveness = 0.1;
            };

            class AOR_PlasmaPenetrating {
                effectiveness = 1.2;
                reopeningChance = 0.8;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 200;
            };
            class AOR_PlasmaPenetratingMinor: AOR_PlasmaPenetrating {
                effectiveness = 1.2;
            };
            class AOR_PlasmaPenetratingMedium: AOR_PlasmaPenetrating {
                effectiveness = 0.75;
            };
            class AOR_PlasmaPenetratingLarge: AOR_PlasmaPenetrating {
                effectiveness = 0.5;
            };

            class AOR_CauterizedPuncture {
                effectiveness = 1.5;
                reopeningChance = 0.8;
                reopeningMinDelay = 100;
                reopeningMaxDelay = 300;
            };
            class AOR_CauterizedPunctureMinor: AOR_CauterizedPuncture {
                effectiveness = 1.5;
            };
            class AOR_CauterizedPunctureMedium: AOR_CauterizedPuncture {
                effectiveness = 1;
            };
            class AOR_CauterizedPunctureLarge: AOR_CauterizedPuncture {
                effectiveness = 0.7;
            };
        };

        class UNSCI_Medkit : FieldDressing {
            // ----- UNSCI Wound Treatments -----
            delete UNSCI_PlasmaBurn;
            delete UNSCI_PlasmaBurnMinor;
            delete UNSCI_PlasmaBurnMedium;
            delete UNSCI_PlasmaBurnLarge;

            delete UNSCI_PlasmaAvulsion;
            delete UNSCI_PlasmaAvulsionMinor;
            delete UNSCI_PlasmaAvulsionMedium;
            delete UNSCI_PlasmaAvulsionLarge;
            
            // ----- AOR Wound Treatments -----
            class AOR_PlasmaBurn {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 50;
                reopeningMaxDelay = 100;
            };
            class AOR_PlasmaBurnMinor: AOR_PlasmaBurn {
                effectiveness = 10;
            };
            class AOR_PlasmaBurnMedium: AOR_PlasmaBurn {
                effectiveness = 10;
            };
            class AOR_PlasmaBurnLarge: AOR_PlasmaBurn {
                effectiveness = 10;
            };
            
            class AOR_RadiationaBurn {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 50;
                reopeningMaxDelay = 100;
            };
            class AOR_RadiationaBurnMinor: AOR_RadiationaBurn {
                effectiveness = 10;
            };
            class AOR_RadiationaBurnMedium: AOR_RadiationaBurn {
                effectiveness = 10;
            };
            class AOR_RadiationaBurnLarge: AOR_RadiationaBurn {
                effectiveness = 10;
            };

            class AOR_PlasmaAvulsion {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 150;
            };
            class AOR_PlasmaAvulsionMinor: AOR_PlasmaAvulsion {
                effectiveness = 10;
            };
            class AOR_PlasmaAvulsionMedium: AOR_PlasmaAvulsion {
                effectiveness = 10;
            };
            class AOR_PlasmaAvulsionLarge: AOR_PlasmaAvulsion {
                effectiveness = 10;
            };

            class AOR_PlasmaPenetrating {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 200;
            };
            class AOR_PlasmaPenetratingMinor: AOR_PlasmaPenetrating {
                effectiveness = 10;
            };
            class AOR_PlasmaPenetratingMedium: AOR_PlasmaPenetrating {
                effectiveness = 10;
            };
            class AOR_PlasmaPenetratingLarge: AOR_PlasmaPenetrating {
                effectiveness = 10;
            };
            
            class AOR_CauterizedPuncture {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 100;
                reopeningMaxDelay = 300;
            };
            class AOR_CauterizedPunctureMinor: AOR_CauterizedPuncture {
                effectiveness = 10;
            };
            class AOR_CauterizedPunctureMedium: AOR_CauterizedPuncture {
                effectiveness = 10;
            };
            class AOR_CauterizedPunctureLarge: AOR_CauterizedPuncture {
                effectiveness = 10;
            };
        };

        class PackingBandage : FieldDressing {
            KILL_WOUND_TYPES;
            // ----- UNSCI Wound Treatments -----
            delete UNSCI_PlasmaBurn;
            delete UNSCI_PlasmaBurnMinor;
            delete UNSCI_PlasmaBurnMedium;
            delete UNSCI_PlasmaBurnLarge;

            delete UNSCI_PlasmaAvulsion;
            delete UNSCI_PlasmaAvulsionMinor;
            delete UNSCI_PlasmaAvulsionMedium;
            delete UNSCI_PlasmaAvulsionLarge;
        };

        class ElasticBandage : FieldDressing {
            KILL_WOUND_TYPES;
            // ----- UNSCI Wound Treatments -----
            delete UNSCI_PlasmaBurn;
            delete UNSCI_PlasmaBurnMinor;
            delete UNSCI_PlasmaBurnMedium;
            delete UNSCI_PlasmaBurnLarge;

            delete UNSCI_PlasmaAvulsion;
            delete UNSCI_PlasmaAvulsionMinor;
            delete UNSCI_PlasmaAvulsionMedium;
            delete UNSCI_PlasmaAvulsionLarge;
        };

        class QuikClot : FieldDressing {
            KILL_WOUND_TYPES;
            // ----- UNSCI Wound Treatments -----
            delete UNSCI_PlasmaBurn;
            delete UNSCI_PlasmaBurnMinor;
            delete UNSCI_PlasmaBurnMedium;
            delete UNSCI_PlasmaBurnLarge;

            delete UNSCI_PlasmaAvulsion;
            delete UNSCI_PlasmaAvulsionMinor;
            delete UNSCI_PlasmaAvulsionMedium;
            delete UNSCI_PlasmaAvulsionLarge;
        };
    };
};
