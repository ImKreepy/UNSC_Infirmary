class CfgFunctions {
    class overwrite_unsci_treatment {
        tag = "unsci_treatment";
        class unsci_treatment {
            class medicationLocal {
                file = QPATHTOF(overwrites\fnc_medicationLocal.sqf);
            };
        };
    };
};
