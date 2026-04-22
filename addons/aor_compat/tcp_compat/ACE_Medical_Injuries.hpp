class ACE_Medical_Injuries {
    class damageTypes {
        class TCP_plasmaBurn {
            class AOR_PlasmaBurn {
                weighting[] = {{0,1}};
            };
            class AOR_PlasmaAvulsion {
                weighting[] = {{1.5,1}, {1.1,0}};
            };
            delete Avulsion;
            delete ThermalBurn;
            delete UNSCI_PlasmaBurn;
            delete UNSCI_PlasmaAvulsion;
        };
    };
};
