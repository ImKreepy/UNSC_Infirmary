#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"unsci_main","unsci_treatment","kat_breathing","kat_pharma","kat_surgery"};
        units[] = {
            "UNSCI_Syringe_Pollysue_30u_Item",
            "UNSCI_Syringe_Pollysue_100u_Item"
        };
        weapons[] = {
            "UNSCI_Syringe_Pollysue_30u",
            "UNSCI_Syringe_Pollysue_100u"
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
#include "ACE_Medical_Injuries.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
#include "gui.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
