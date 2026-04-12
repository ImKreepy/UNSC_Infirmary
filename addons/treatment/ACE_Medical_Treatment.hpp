class ACE_Medical_Treatment {
    class Bandaging {
        class BasicBandage {
            KILL_WOUND_TYPES;
        };
        class FieldDressing {
            KILL_WOUND_TYPES;
            // ----- UNSCI Wound Treatments -----
            class UNSCI_PlasmaBurn {
                effectiveness = 3;
                reopeningChance = 0.3;
                reopeningMinDelay = 200;
                reopeningMaxDelay = 1000;
            };
            class UNSCI_PlasmaBurnMinor: UNSCI_PlasmaBurn {
                effectiveness = 3;
            };
            class UNSCI_PlasmaBurnMedium: UNSCI_PlasmaBurn {
                effectiveness = 2;
            };
            class UNSCI_PlasmaBurnLarge: UNSCI_PlasmaBurn {
                effectiveness = 1;
            };

            class UNSCI_PlasmaAvulsion {
                effectiveness = 1;
                reopeningChance = 0.5;
                reopeningMinDelay = 120;
                reopeningMaxDelay = 200;
            };
            class UNSCI_PlasmaAvulsionMinor: UNSCI_PlasmaAvulsion {
                effectiveness = 1;
            };
            class UNSCI_PlasmaAvulsionMedium: UNSCI_PlasmaAvulsion {
                effectiveness = 0.9;
            };
            class UNSCI_PlasmaAvulsionLarge: UNSCI_PlasmaAvulsion {
                effectiveness = 0.75;
            };
        };
        // Biofoam is high treatment, lower reopen chance, longer reopening delay
        class UNSCI_Biofoam : FieldDressing {
            // ----- UNSCI Wound Treatments -----
            UNSCI_PLASMA_BIOFOAM;

            // ----- ACE Wound Treatments -----
            class Abrasion {
                effectiveness = 2;
                reopeningChance = 0.3;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 1500;
            };
            class AbrasionMinor: Abrasion {
                effectiveness = 2;
            };
            class AbrasionMedium: Abrasion {
                effectiveness = 1.5;
                reopeningChance = 0.6;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.9;
            };

            class Avulsion: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.4;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 1600;
            };
            class AvulsionMinor: Avulsion {
                effectiveness = 4;
            };
            class AvulsionMedium: Avulsion {
                effectiveness = 3;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 2;
            };

            class Contusion: Abrasion {
                effectiveness = 0.5;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.2;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1000;
            };
            class CrushMinor: Crush {
                effectiveness = 1;
                reopeningChance = 0.2;
            };
            class CrushMedium: Crush {
                effectiveness = 0.7;
                reopeningChance = 0.3;
            };
            class CrushLarge: Crush {
                effectiveness = 0.5;
                reopeningChance = 0.4;
            };

            class Cut: Abrasion {
                effectiveness = 5;
                reopeningChance = 0.1;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 1000;
            };
            class CutMinor: Cut {
                effectiveness = 5;
                reopeningChance = 0.1;
            };
            class CutMedium: Cut {
                effectiveness = 4;
                reopeningChance = 0.3;
            };
            class CutLarge: Cut {
                effectiveness = 3;
                reopeningChance = 0.5;
            };

            class Laceration: Abrasion {
                effectiveness = 3;
                reopeningChance = 0.3;
                reopeningMinDelay = 500;
                reopeningMaxDelay = 2000;
            };
            class LacerationMinor: Laceration {
                effectiveness = 3;
                reopeningChance = 0.3;
            };
            class LacerationMedium: Laceration {
                effectiveness = 2;
                reopeningChance = 0.4;
            };
            class LacerationLarge: Laceration {
                effectiveness = 1;
                reopeningChance = 0.5;
            };

            class VelocityWound: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.4;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 2000;
            };
            class VelocityWoundMinor: VelocityWound {
                effectiveness = 3;
            };
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 2;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 1.5;
            };

            class PunctureWound: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.3;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 3000;
            };
            class PunctureWoundMinor: PunctureWound {
                effectiveness = 3;
            };
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 2;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 1.5;
            };
        };
        // MediGel is average treatment, high reopen chance, shorter reopening delay
        class UNSCI_MediGel : FieldDressing {
            // ----- UNSCI Wound Treatments -----
            UNSCI_PLASMA_MEDIGEL;

            // ----- ACE Wound Treatments -----
            class Abrasion {
                effectiveness = 5;
                reopeningChance = 0.6;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 150;
            };
            class AbrasionMinor: Abrasion {
                effectiveness = 5;
            };
            class AbrasionMedium: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.9;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 3;
                reopeningChance = 1;
            };

            class Avulsion: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.7;
                reopeningMinDelay = 100;
                reopeningMaxDelay = 160;
            };
            class AvulsionMinor: Avulsion {
                effectiveness = 1;
            };
            class AvulsionMedium: Avulsion {
                effectiveness = 0.8;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 0.5;
            };

            class Contusion: Abrasion {
                effectiveness = 4;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 3;
                reopeningChance = 0.5;
                reopeningMinDelay = 60;
                reopeningMaxDelay = 100;
            };
            class CrushMinor: Crush {
                effectiveness = 3;
                reopeningChance = 0.6;
            };
            class CrushMedium: Crush {
                effectiveness = 2.7;
                reopeningChance = 0.7;
            };
            class CrushLarge: Crush {
                effectiveness = 2;
                reopeningChance = 0.8;
            };

            class Cut: Abrasion {
                effectiveness = 6;
                reopeningChance = 0.4;
                reopeningMinDelay = 70;
                reopeningMaxDelay = 100;
            };
            class CutMinor: Cut {
                effectiveness = 6;
                reopeningChance = 0.6;
            };
            class CutMedium: Cut {
                effectiveness = 4.5;
                reopeningChance = 0.7;
            };
            class CutLarge: Cut {
                effectiveness = 3;
                reopeningChance = 0.8;
            };

            class Laceration: Abrasion {
                effectiveness = 3;
                reopeningChance = 0.65;
                reopeningMinDelay = 50;
                reopeningMaxDelay = 200;
            };
            class LacerationMinor: Laceration {
                effectiveness = 3;
                reopeningChance = 0.65;
            };
            class LacerationMedium: Laceration {
                effectiveness = 2;
                reopeningChance = 0.8;
            };
            class LacerationLarge: Laceration {
                effectiveness = 1.5;
                reopeningChance = 0.9;
            };

            class VelocityWound: Abrasion {
                effectiveness = 1.2;
                reopeningChance = 0.8;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 200;
            };
            class VelocityWoundMinor: VelocityWound {
                effectiveness = 1.2;
            };
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 0.75;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 0.5;
            };

            class PunctureWound: Abrasion {
                effectiveness = 1.5;
                reopeningChance = 0.8;
                reopeningMinDelay = 100;
                reopeningMaxDelay = 300;
            };
            class PunctureWoundMinor: PunctureWound {
                effectiveness = 1.5;
            };
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 1;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 0.7;
            };
        };

        class UNSCI_Medkit : FieldDressing {
            // ----- UNSCI Wound Treatments -----
            UNSCI_PLASMA_MEDKIT;

            // ----- ACE Wound Treatments -----
            class Abrasion {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 150;
            };
            class AbrasionMinor: Abrasion {
                effectiveness = 10;
            };
            class AbrasionMedium: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.3;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.3;
            };

            class Avulsion: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 100;
                reopeningMaxDelay = 160;
            };
            class AvulsionMinor: Avulsion {
                effectiveness = 10;
            };
            class AvulsionMedium: Avulsion {
                effectiveness = 10;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 10;
            };

            class Contusion: Abrasion {
                effectiveness = 10;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 60;
                reopeningMaxDelay = 100;
            };
            class CrushMinor: Crush {
                effectiveness = 10;
                reopeningChance = 0.3;
            };
            class CrushMedium: Crush {
                effectiveness = 10;
                reopeningChance = 0.3;
            };
            class CrushLarge: Crush {
                effectiveness = 10;
                reopeningChance = 0.3;
            };

            class Cut: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 70;
                reopeningMaxDelay = 100;
            };
            class CutMinor: Cut {
                effectiveness = 10;
                reopeningChance = 0.3;
            };
            class CutMedium: Cut {
                effectiveness = 10;
                reopeningChance = 0.3;
            };
            class CutLarge: Cut {
                effectiveness = 10;
                reopeningChance = 0.3;
            };

            class Laceration: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 50;
                reopeningMaxDelay = 200;
            };
            class LacerationMinor: Laceration {
                effectiveness = 10;
                reopeningChance = 0.3;
            };
            class LacerationMedium: Laceration {
                effectiveness = 10;
                reopeningChance = 0.3;
            };
            class LacerationLarge: Laceration {
                effectiveness = 10;
                reopeningChance = 0.3;
            };

            class VelocityWound: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 200;
            };
            class VelocityWoundMinor: VelocityWound {
                effectiveness = 10;
            };
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 10;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 10;
            };

            class PunctureWound: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 100;
                reopeningMaxDelay = 300;
            };
            class PunctureWoundMinor: PunctureWound {
                effectiveness = 10;
            };
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 10;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 10;
            };
        };
        
        // packing bandage is average treatment, higher reopen change, longer reopening delay
        class PackingBandage : FieldDressing {
            KILL_WOUND_TYPES;
            // ----- UNSCI Wound Treatments -----
            class UNSCI_PlasmaBurn {
                effectiveness = 2;
                reopeningChance = 0.6;
                reopeningMinDelay = 1200;
                reopeningMaxDelay = 2000;
            };
            class UNSCI_PlasmaBurnMinor: UNSCI_PlasmaBurn {
                effectiveness = 2;
            };
            class UNSCI_PlasmaBurnMedium: UNSCI_PlasmaBurn {
                effectiveness = 1;
            };
            class UNSCI_PlasmaBurnLarge: UNSCI_PlasmaBurn {
                effectiveness = 0.5;
            };

            class UNSCI_PlasmaAvulsion {
                effectiveness = 3;
                reopeningChance = 0.5;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 1500;
            };
            class UNSCI_PlasmaAvulsionMinor: UNSCI_PlasmaAvulsion {
                effectiveness = 3;
            };
            class UNSCI_PlasmaAvulsionMedium: UNSCI_PlasmaAvulsion {
                effectiveness = 2;
            };
            class UNSCI_PlasmaAvulsionLarge: UNSCI_PlasmaAvulsion {
                effectiveness = 1;
            };
        };
        // elastic bandage is higher treatment, higher reopen change, shorter reopen delay
        class ElasticBandage : FieldDressing {
            KILL_WOUND_TYPES;
            // ----- UNSCI Wound Treatments -----
            class UNSCI_PlasmaBurn {
                effectiveness = 4;
                reopeningChance = 0.4;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 150;
            };
            class UNSCI_PlasmaBurnMinor: UNSCI_PlasmaBurn {
                effectiveness = 4;
            };
            class UNSCI_PlasmaBurnMedium: UNSCI_PlasmaBurn {
                effectiveness = 3;
            };
            class UNSCI_PlasmaBurnLarge: UNSCI_PlasmaBurn {
                effectiveness = 2;
            };

            class UNSCI_PlasmaAvulsion {
                effectiveness = 3;
                reopeningChance = 0.6;
                reopeningMinDelay = 100;
                reopeningMaxDelay = 160;
            };
            class UNSCI_PlasmaAvulsionMinor: UNSCI_PlasmaAvulsion {
                effectiveness = 3;
            };
            class UNSCI_PlasmaAvulsionMedium: UNSCI_PlasmaAvulsion {
                effectiveness = 2;
            };
            class UNSCI_PlasmaAvulsionLarge: UNSCI_PlasmaAvulsion {
                effectiveness = 1;
            };
        };
        // quickclot is lower treatment, lower reopen chance, longer reopening delay
        class QuikClot : FieldDressing {
            KILL_WOUND_TYPES;
            // ----- UNSCI Wound Treatments -----
            class UNSCI_PlasmaBurn {
                effectiveness = 2;
                reopeningChance = 0.3;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 1500;
            };
            class UNSCI_PlasmaBurnMinor: UNSCI_PlasmaBurn {
                effectiveness = 2;
            };
            class UNSCI_PlasmaBurnMedium: UNSCI_PlasmaBurn {
                effectiveness = 1;
            };
            class UNSCI_PlasmaBurnLarge: UNSCI_PlasmaBurn {
                effectiveness = 0.5;
            };

            class UNSCI_PlasmaAvulsion {
                effectiveness = 0.7;
                reopeningChance = 0.2;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 1600;
            };
            class UNSCI_PlasmaAvulsionMinor: UNSCI_PlasmaAvulsion {
                effectiveness = 0.7;
            };
            class UNSCI_PlasmaAvulsionMedium: UNSCI_PlasmaAvulsion {
                effectiveness = 0.65;
            };
            class UNSCI_PlasmaAvulsionLarge: UNSCI_PlasmaAvulsion {
                effectiveness = 0.5;
            };
        };

        class OPTRE_Biofoam: ElasticBandage {
            UNSCI_PLASMA_BIOFOAM;
        };
        class OPTRE_Medigel: ElasticBandage {
            UNSCI_PLASMA_MEDIGEL;
        };
    };
    class Medication {
        class UNSCI_Stimulant {
            painReduce = 0.4;
            hrIncreaseLow[] = {10, 10};
            hrIncreaseNormal[] = {10, 30};
            hrIncreaseHigh[] = {10, 50};
            timeInSystem = 1200;
            timeTillMaxEffect = 5;
            maxDose = 4;
            maxDoseDeviation = 3;
            dose = 1;
            incompatibleMedication[] = {};
            viscosityChange = -5;
        };
        class UNSCI_Pollysue {
            painReduce = 0.8;
            hrIncreaseLow[] = {-20, -30};
            hrIncreaseNormal[] = {-20, -40};
            hrIncreaseHigh[] = {-20, -45};
            timeInSystem = 2500;
            timeTillMaxEffect = 10;
            maxDose = 2;
            dose = 1;
            incompatibleMedication[] = {};
            viscosityChange = -10;
        };
    };
    class IV {
        class PlasmaIV;
        class UNSCI_MedkitPlasmaIV: PlasmaIV {
            volume = 1000;
        };
    };
};
