// Impalements will tend to be medium or large
#define IMPALEMENT(type) class type##Wound {    \
    weighting[] = {{1.5, 0}, {1.5, 1}, {0.35, 1}, {0.35, 0}};   \
    sizeMultiplier = 0.6;   \
}
#define THRESHOLDS {20, 10}, {4.5, 2}, {3, 1}, {0, 1}

class ACE_Medical_Injuries {
    class wounds {
        class UNSCI_BlamiteWound {
            bleeding = 0.05;
            pain = 0.8;
            causeLimping = 1;
            causeFracture = 1;
        };
        class UNSCI_SpikeWound {
            bleeding = 0.05;
            pain = 0.8;
            causeLimping = 1;
            causeFracture = 1;
        };
        class UNSCI_PlasmaBurn {
            bleeding = 0.009;
            pain = 0.6;
        };
        class UNSCI_PlasmaAvulsion {
            bleeding = 0.08;
            pain = 1.0;
            causeLimping = 1;
        };
    };
    class damageTypes {
        class woundHandlers;
        class UNSCI_RemovedImpalement {
            thresholds[] = {{1,1}};
            selectionSpecific = 1;
            class PunctureWound {
                weighting[] = {{1, 1}};
                sizeMultiplier = 0.6;
                bleedingMultiplier = 12;
                painMultiplier = 2;
            };
        };
        class UNSCI_Blamite {
            thresholds[] = {THRESHOLDS};
            selectionSpecific = 1;
            class woundHandlers: woundHandlers {
                ACEGVAR(medical_damage,armorPenetration) = ACEQFUNC(medical_damage,woundsHandlerArmorPenetration);
            };

            class Avulsion {
                weighting[] = {{1, 1}, {0.8, 0}};
            };
            class Cut {
                weighting[] = {{1.5, 0}, {0.35, 1}, {0, 0}};
            };
            class Contusion {
                weighting[] = {{0.5, 0}, {0.35, 1}};
                sizeMultiplier = 2;
                painMultiplier = 0.9;
            };
            class UNSCI_BlamiteWound {
                weighting[] = {{1.5, 1}, {0.35, 1}};
                sizeMultiplier = 0.5;
            };
        };
        class UNSCI_Spike {
            thresholds[] = {THRESHOLDS};
            selectionSpecific = 1;
            class woundHandlers: woundHandlers {
                ACEGVAR(medical_damage,armorPenetration) = ACEQFUNC(medical_damage,woundsHandlerArmorPenetration);
            };

            class Avulsion {
                weighting[] = {{1, 1}, {0.8, 0}};
            };
            class Cut {
                weighting[] = {{1.5, 0}, {0.35, 1}, {0, 0}};
            };
            class Contusion {
                weighting[] = {{0.5, 0}, {0.35, 1}};
                sizeMultiplier = 2;
                painMultiplier = 0.9;
            };
            class UNSCI_SpikeWound {
                weighting[] = {{1.5, 1}, {0.35, 1}};
                sizeMultiplier = 0.5;
            };
        };
        class UNSCI_BlamiteExplosive {
            thresholds[] = {{20, 15}, {8, 7}, {2, 3}, {1.2, 2}, {0.4, 1}, {0,0}};
            selectionSpecific = 0;
            class Avulsion {
                weighting[] = {{1, 1}, {0.8, 0}};
            };
            class Cut {
                weighting[] = {{1.5, 0}, {0.35, 1}, {0, 0}};
            };
            class Contusion {
                weighting[] = {{0.5, 0}, {0.35, 1}};
                sizeMultiplier = 2;
                painMultiplier = 0.9;
            };
            class UNSCI_BlamiteWound {
                weighting[] = {{0.9, 0}, {0.7, 1}, {0.35, 0}};
                sizeMultiplier = 0.6;
            };
        };
        class UNSCI_SpikeGrenade {
            thresholds[] = {{20, 10}, {10, 5}, {4, 3}, {1.5, 2}, {0.8, 2}, {0.3, 1}, {0, 0}};
            selectionSpecific = 0;
            class Avulsion {
                weighting[] = {{1.5, 1}, {1.1, 0}};
            };
            class Cut {
                weighting[] = {{0.7, 0}, {0.35, 1}, {0.35, 0}};
            };
            class Contusion {
                weighting[] = {{0.5, 0}, {0.35, 1}};
                sizeMultiplier = 2;
                painMultiplier = 0.9;
            };
            class UNSCI_SpikeWound {
                weighting[] = {{0.9, 0}, {0.7, 1}, {0.35, 0}};
                sizeMultiplier = 0.6;
            };
        };
        class UNSCI_PlasmaBolt {
            thresholds[] = {{20, 10}, {4.5, 2}, {3, 1}, {0, 1}};
            selectionSpecific = 1;
            class UNSCI_PlasmaBurn {
                weighting[] = {{1, 1}, {0.35, 0}};
                sizeMultiplier = 0.5;
            };
            class Contusion {
                weighting[] = {{0.35, 0}, {0.35, 1}};
                sizeMultiplier = 3;
                painMultiplier = 2;
            };
            class UNSCI_PlasmaAvulsion {
                weighting[] = {{1.5, 0}, {1.5, 1}, {0.35, 1}, {0.35, 0}};
                sizeMultiplier = 0.7;
            };
        };
        class UNSCI_PlasmaExplosive {
            thresholds[] = {{20, 15}, {8, 7}, {2, 3}, {1.2, 2}, {0.4, 1}, {0,0}};
            selectionSpecific = 0;
            class UNSCI_PlasmaBurn {
                weighting[] = {{1, 1}, {0.8, 0}};
            };
            class Cut {
                weighting[] = {{1.5, 0}, {0.35, 1}, {0, 0}};
            };
            class Contusion {
                weighting[] = {{0.5, 0}, {0.35, 1}};
                sizeMultiplier = 2;
                painMultiplier = 0.9;
            };
            class UNSCI_PlasmaAvulsion {
                weighting[] = {{1.5, 0}, {1.5, 1}, {0.35, 1}, {0.35, 0}};
                sizeMultiplier = 0.8;
            };
        };
        class UNSCI_PlasmaGrenade {
            thresholds[] = {{20, 10}, {10, 5}, {4, 3}, {1.5, 2}, {0.8, 2}, {0.3, 1}, {0, 0}};
            selectionSpecific = 0;
            class UNSCI_PlasmaAvulsion {
                weighting[] = {{1.5, 1}, {1.1, 0}};
            };
            class Cut {
                weighting[] = {{0.7, 0}, {0.35, 1}, {0.35, 0}};
            };
            class Contusion {
                weighting[] = {{0.5, 0}, {0.35, 1}};
                sizeMultiplier = 2;
                painMultiplier = 0.9;
            };
            class UNSCI_PlasmaBurn {
                weighting[] = {{0.9, 0}, {0.7, 1}, {0.35, 0}};
            };
        };
    };
};
