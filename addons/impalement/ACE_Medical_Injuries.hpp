#define IMPALEMENT(type) class type##Wound {  \
    weighting[] = {{1.5, 0}, {1.5, 1}, {0.35, 1}, {0.35, 0}};   \
    sizeMultiplier = 0.8;   \
}
#define THRESHOLDS {{20, 10}, {4.5, 2}, {3, 1}, {0, 1}}

class ACE_Medical_Injuries {
    class wounds {
        class ImpalementWound {
            bleeding = 0.05;
            pain = 0.8;
            causeLimping = 1;
            causeFracture = 1;
        };
        class BlamiteWound: ImpalementWound {};
        class SpikeWound: ImpalementWound {};
    };
    class damageTypes {
        class woundHandlers;
        class Impalement {
            thresholds[] = {THRESHOLDS};
            selectionSpecific = 1;
            class woundHandlers: woundHandlers {
                GVAR(armorPenetration) = QFUNC(woundsHandlerArmorPenetration);
            };

            class Avulsion {
                weighting[] = {{1, 1}, {0.35, 0}};
            };
            class Contusion {
                weighting[] = {{0.35, 0}, {0.35, 1}};
                sizeMultiplier = 3.2;
                painMultiplier = 2.2;
            };
            IMPALEMENT(Impalement);
        };
        class Blamite {
            thresholds[] = {THRESHOLDS};
            selectionSpecific = 1;
            class woundHandlers: woundHandlers {
                GVAR(armorPenetration) = QFUNC(woundsHandlerArmorPenetration);
            };

            class Avulsion {
                weighting[] = {{1, 1}, {0.35, 0}};
            };
            class Contusion {
                weighting[] = {{0.35, 0}, {0.35, 1}};
                sizeMultiplier = 3.2;
                painMultiplier = 2.2;
            };
            IMPALEMENT(Blamite);
        };
        class Spike {
            thresholds[] = {THRESHOLDS};
            selectionSpecific = 1;
            class woundHandlers: woundHandlers {
                GVAR(armorPenetration) = QFUNC(woundsHandlerArmorPenetration);
            };

            class Avulsion {
                weighting[] = {{1, 1}, {0.35, 0}};
            };
            class Contusion {
                weighting[] = {{0.35, 0}, {0.35, 1}};
                sizeMultiplier = 3.2;
                painMultiplier = 2.2;
            };
            IMPALEMENT(Spike);
        };
        class RemovedImpalement {
            thresholds[] = {THRESHOLDS};
            selectionSpecific = 1;
            IMPALEMENT(Puncture);
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
            IMPALEMENT(Blamite);
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
            IMPALEMENT(Spike);
        };
    };
};
