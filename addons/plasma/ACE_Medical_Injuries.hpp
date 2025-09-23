class ACE_Medical_Injuries {
    class woundHandlers;
    class PlasmaBolt {
        thresholds[] = {{20, 10}, {4.5, 2}, {3, 1}, {0, 1}};
        selectionSpecific = 1;
        class woundHandlers: woundHandlers {
            GVAR(armorDegrading) = QFUNC(armorDegrading);
        };

        class PlasmaBurn {
            weighting[] = {{1, 1}, {0.35, 0}};
            sizeMultiplier = 0.6;
        };
        class Contusion {
            weighting[] = {{0.35, 0}, {0.35, 1}};
            sizeMultiplier = 3.2;
            painMultiplier = 2.2;
        };
        class PlasmaAvulsion {
            weighting[] = {{1.5, 0}, {1.5, 1}, {0.35, 1}, {0.35, 0}};
            sizeMultiplier = 0.8;
        };
    };
    class PlasmaExplosive {
        thresholds[] = {{20, 15}, {8, 7}, {2, 3}, {1.2, 2}, {0.4, 1}, {0,0}};
        selectionSpecific = 0;
        class PlasmaBurn {
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
        class PlasmaAvulsion {
            weighting[] = {{1.5, 0}, {1.5, 1}, {0.35, 1}, {0.35, 0}};
            sizeMultiplier = 0.8;
        };
    };
};
