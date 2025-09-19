// Impalements will tend to be medium or large
#define IMPALEMENT(type) class type##Wound {    \
    weighting[] = {{1.5, 0}, {1.5, 1}, {0.35, 1}, {0.35, 0}};   \
    sizeMultiplier = 0.6;   \
}
#define THRESHOLDS {20, 10}, {4.5, 2}, {3, 1}, {0, 1}

class ACE_Medical_Injuries {
    class wounds {
        class BlamiteWound {
            bleeding = 0.05;
            pain = 0.8;
            causeLimping = 1;
            causeFracture = 1;
        };
        class SpikeWound {
            bleeding = 0.05;
            pain = 0.8;
            causeLimping = 1;
            causeFracture = 1;
        };
    };
    class damageTypes {
        class woundHandlers;
        class RemovedImpalement {
            thresholds[] = {{1,1}};
            selectionSpecific = 1;
            class PunctureWound {
                weighting[] = {{1, 1}};
                sizeMultiplier = 0.6;
                bleedingMultiplier = 12;
                painMultiplier = 2;
            };
        };
        class Blamite {
            thresholds[] = {THRESHOLDS};
            selectionSpecific = 1;
            class woundHandlers: woundHandlers {
                GVAR(armorPenetration) = QFUNC(woundsHandlerArmorPenetration);
            };

            class Avulsion {
                weighting[] = {{1, 0}, {1, 0.2}, {0.35, 0}};
                sizeMultiplier = 0.6;
            };
            class Contusion {
                weighting[] = {{0.35, 0}, {0.35, 1}};
                sizeMultiplier = 3.2;
                painMultiplier = 2.2;
            };
            class BlamiteWound {
                weighting[] = {{1.5, 0}, {1.5, 1}, {0.35, 1}, {0.35, 0}};
                sizeMultiplier = 0.5;
            };
        };
        class Spike {
            thresholds[] = {THRESHOLDS};
            selectionSpecific = 1;
            class woundHandlers: woundHandlers {
                GVAR(armorPenetration) = QFUNC(woundsHandlerArmorPenetration);
            };

            class Avulsion {
                weighting[] = {{1, 0}, {1, 0.2}, {0.35, 0}};
                sizeMultiplier = 0.6;
            };
            class Contusion {
                weighting[] = {{0.35, 0}, {0.35, 1}};
                sizeMultiplier = 3.2;
                painMultiplier = 2.2;
            };
            class SpikeWound {
                weighting[] = {{1.5, 0}, {1.5, 1}, {0.35, 1}, {0.35, 0}};
                sizeMultiplier = 0.6;
            };
        };
        class BlamiteExplosive {
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
            class BlamiteWound {
                weighting[] = {{0.9, 0}, {0.7, 1}, {0.35, 0}};
                sizeMultiplier = 0.6;
            };
        };
        class SpikeGrenade {
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
            class SpikeWound {
                weighting[] = {{0.9, 0}, {0.7, 1}, {0.35, 0}};
                sizeMultiplier = 0.6;
            };
        };
    };
};
