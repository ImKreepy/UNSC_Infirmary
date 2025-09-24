#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"unsci_main","ace_medical_treatment"};
        units[] = {
            "UNSCI_Biofoam_Item",
            "UNSCI_Medigel_Item",
            "UNSCI_Medkit_Item"
        };
        weapons[] = {
            "UNSCI_Biofoam",
            "UNSCI_Medigel",
            "UNSCI_Medkit"
        };
        VERSION_CONFIG;

         
    };
};

#include "CfgEventHandlers.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
