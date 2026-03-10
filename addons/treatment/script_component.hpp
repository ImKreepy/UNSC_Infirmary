#define COMPONENT treatment
#define COMPONENT_BEAUTIFIED Treatment

#include "\ik\unsci\addons\main\script_mod.hpp"

#include "\ik\unsci\addons\main\script_macros.hpp"

#define UNSCI_PLASMA_BIOFOAM class UNSCI_PlasmaBurn {   \
                effectiveness = 1;  \
                reopeningChance = 0.2;  \
                reopeningMinDelay = 500;    \
                reopeningMaxDelay = 1000;   \
            };  \
            class UNSCI_PlasmaBurnMinor: UNSCI_PlasmaBurn { \
                effectiveness = 1;  \
            };  \
            class UNSCI_PlasmaBurnMedium: UNSCI_PlasmaBurn {    \
                effectiveness = 0.8;    \
            };  \
            class UNSCI_PlasmaBurnLarge: UNSCI_PlasmaBurn { \
                effectiveness = 0.65;   \
            };  \
            class UNSCI_PlasmaAvulsion {    \
                effectiveness = 5;  \
                reopeningChance = 0.3;  \
                reopeningMinDelay = 800;    \
                reopeningMaxDelay = 1500;   \
            };  \
            class UNSCI_PlasmaAvulsionMinor: UNSCI_PlasmaAvulsion { \
                effectiveness = 5;  \
            };  \
            class UNSCI_PlasmaAvulsionMedium: UNSCI_PlasmaAvulsion {    \
                effectiveness = 4;  \
            };  \
            class UNSCI_PlasmaAvulsionLarge: UNSCI_PlasmaAvulsion { \
                effectiveness = 3;  \
            }

#define UNSCI_PLASMA_MEDIGEL class UNSCI_PlasmaBurn {   \
                effectiveness = 5;  \
                reopeningChance = 0.6;  \
                reopeningMinDelay = 80;    \
                reopeningMaxDelay = 150;   \
            };  \
            class UNSCI_PlasmaBurnMinor: UNSCI_PlasmaBurn { \
                effectiveness = 5;  \
            };  \
            class UNSCI_PlasmaBurnMedium: UNSCI_PlasmaBurn {    \
                effectiveness = 4;    \
            };  \
            class UNSCI_PlasmaBurnLarge: UNSCI_PlasmaBurn { \
                effectiveness = 3;  \
            };  \
            class UNSCI_PlasmaAvulsion {    \
                effectiveness = 0.4;    \
                reopeningChance = 1;    \
                reopeningMinDelay = 50;    \
                reopeningMaxDelay = 100;   \
            };  \
            class UNSCI_PlasmaAvulsionMinor: UNSCI_PlasmaAvulsion {   \
                effectiveness = 0.4;    \
            };  \
            class UNSCI_PlasmaAvulsionMedium: UNSCI_PlasmaAvulsion {    \
                effectiveness = 0.25;   \
            };  \
            class UNSCI_PlasmaAvulsionLarge: UNSCI_PlasmaAvulsion { \
                effectiveness = 0.1;    \
            }

#define UNSCI_PLASMA_MEDKIT class UNSCI_PlasmaBurn {   \
                effectiveness = 10;  \
                reopeningChance = 0.3;  \
                reopeningMinDelay = 50;    \
                reopeningMaxDelay = 100;   \
            };  \
            class UNSCI_PlasmaBurnMinor: UNSCI_PlasmaBurn { \
                effectiveness = 10;  \
            };  \
            class UNSCI_PlasmaBurnMedium: UNSCI_PlasmaBurn {    \
                effectiveness = 10;    \
            };  \
            class UNSCI_PlasmaBurnLarge: UNSCI_PlasmaBurn { \
                effectiveness = 10;  \
            };  \
            class UNSCI_PlasmaAvulsion {    \
                effectiveness = 10;  \
                reopeningChance = 0.3;  \
                reopeningMinDelay = 80;    \
                reopeningMaxDelay = 150;   \
            };  \
            class UNSCI_PlasmaAvulsionMinor: UNSCI_PlasmaAvulsion {   \
                effectiveness = 10;  \
            };  \
            class UNSCI_PlasmaAvulsionMedium: UNSCI_PlasmaAvulsion {    \
                effectiveness = 10;    \
            };  \
            class UNSCI_PlasmaAvulsionLarge: UNSCI_PlasmaAvulsion { \
                effectiveness = 10;    \
            }
