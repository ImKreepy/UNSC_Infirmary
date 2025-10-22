#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"unsci_main","unsci_items","unsci_damage","ace_medical_treatment"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

         
    };
};

#include "CfgEventHandlers.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
