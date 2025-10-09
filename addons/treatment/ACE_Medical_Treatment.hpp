class ACE_Medical_Treatment {
    class Bandaging {
        class BasicBandage {
            KILL_WOUND_TYPES;
        };
        class FieldDressing {
            KILL_WOUND_TYPES;
        };
        class UNSCI_Biofoam : FieldDressing {
            // ----- UNSCI Wound Treatments -----
            class UNSCI_PlasmaBurn {
                effectiveness = 0.8;
                reopeningChance = 0.2;
                reopeningMinDelay = 50;
                reopeningMaxDelay = 100;
            };
            class UNSCI_PlasmaBurnMinor: UNSCI_PlasmaBurn {
                effectiveness = 0.8;
            };
            class UNSCI_PlasmaBurnMedium: UNSCI_PlasmaBurn {
                effectiveness = 0.6;
            };
            class UNSCI_PlasmaBurnLarge: UNSCI_PlasmaBurn {
                effectiveness = 0.4;
            };

            class UNSCI_PlasmaAvulsion {
                effectiveness = 5;
                reopeningChance = 0.5;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 150;
            };
            class UNSCI_PlasmaAvulsionMinor: UNSCI_PlasmaAvulsion {
                effectiveness = 4;
            };
            class UNSCI_PlasmaAvulsionMedium: UNSCI_PlasmaAvulsion {
                effectiveness = 3.5;
            };
            class UNSCI_PlasmaAvulsionLarge: UNSCI_PlasmaAvulsion {
                effectiveness = 3;
            };

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
                effectiveness = 3;
                reopeningChance = 0.4;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 1600;
            };
            class AvulsionMinor: Avulsion {
                effectiveness = 2;
            };
            class AvulsionMedium: Avulsion {
                effectiveness = 1;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 0.8;
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
                effectiveness = 0.7;
                reopeningChance = 0.2;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1000;
            };
            class CrushMinor: Crush {
                effectiveness = 0.4;
                reopeningChance = 0.3;
            };
            class CrushMedium: Crush {
                effectiveness = 0.2;
                reopeningChance = 0.4;
            };
            class CrushLarge: Crush {
                effectiveness = 0.1;
                reopeningChance = 0.5;
            };

            class Cut: Abrasion {
                effectiveness = 5;
                reopeningChance = 0.1;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 1000;
            };
            class CutMinor: Cut {
                effectiveness = 5;
                reopeningChance = 0.3;
            };
            class CutMedium: Cut {
                effectiveness = 4;
                reopeningChance = 0.4;
            };
            class CutLarge: Cut {
                effectiveness = 3;
                reopeningChance = 0.5;
            };

            class Laceration: Abrasion {
                effectiveness = 1.5;
                reopeningChance = 0.35;
                reopeningMinDelay = 500;
                reopeningMaxDelay = 2000;
            };
            class LacerationMinor: Laceration {
                effectiveness = 1.5;
                reopeningChance = 0.35;
            };
            class LacerationMedium: Laceration {
                effectiveness = 1.2;
                reopeningChance = 0.5;
            };
            class LacerationLarge: Laceration {
                effectiveness = 1;
                reopeningChance = 0.6;
            };

            class VelocityWound: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.7;
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
                reopeningChance = 0.7;
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
        class UNSCI_Medigel : FieldDressing {
            // ----- UNSCI Wound Treatments -----
            class UNSCI_PlasmaBurn {
                effectiveness = 5;
                reopeningChance = 0.2;
                reopeningMinDelay = 50;
                reopeningMaxDelay = 100;
            };
            class UNSCI_PlasmaBurnMinor: UNSCI_PlasmaBurn {
                effectiveness = 4;
            };
            class UNSCI_PlasmaBurnMedium: UNSCI_PlasmaBurn {
                effectiveness = 3.5;
            };
            class UNSCI_PlasmaBurnLarge: UNSCI_PlasmaBurn {
                effectiveness = 3;
            };

            class UNSCI_PlasmaAvulsion {
                effectiveness = 0.3;
                reopeningChance = 0.5;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 150;
            };
            class UNSCI_PlasmaAvulsionMinor: UNSCI_PlasmaAvulsion {
                effectiveness = 0.3;
            };
            class UNSCI_PlasmaAvulsionMedium: UNSCI_PlasmaAvulsion {
                effectiveness = 0.2;
            };
            class UNSCI_PlasmaAvulsionLarge: UNSCI_PlasmaAvulsion {
                effectiveness = 0.1;
            };

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
                reopeningChance = 1;
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
                reopeningChance = 1;
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
            class UNSCI_PlasmaBurn {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 50;
                reopeningMaxDelay = 100;
            };
            class UNSCI_PlasmaBurnMinor: UNSCI_PlasmaBurn {
                effectiveness = 10;
            };
            class UNSCI_PlasmaBurnMedium: UNSCI_PlasmaBurn {
                effectiveness = 10;
            };
            class UNSCI_PlasmaBurnLarge: UNSCI_PlasmaBurn {
                effectiveness = 10;
            };

            class UNSCI_PlasmaAvulsion {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 80;
                reopeningMaxDelay = 150;
            };
            class UNSCI_PlasmaAvulsionMinor: UNSCI_PlasmaAvulsion {
                effectiveness = 10;
            };
            class UNSCI_PlasmaAvulsionMedium: UNSCI_PlasmaAvulsion {
                effectiveness = 10;
            };
            class UNSCI_PlasmaAvulsionLarge: UNSCI_PlasmaAvulsion {
                effectiveness = 10;
            };

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
        
        class PackingBandage : FieldDressing {
            KILL_WOUND_TYPES;
        };
        class ElasticBandage : FieldDressing {
            KILL_WOUND_TYPES;
        };
        class QuikClot : FieldDressing {
            KILL_WOUND_TYPES;
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
            dose = 1;
            incompatibleMedication[] = {};
        };
    };
    class IV {
        class PlasmaIV;
        class UNSCI_MedkitPlasmaIV: PlasmaIV {
            volume = 2500;
        };
    };
};
