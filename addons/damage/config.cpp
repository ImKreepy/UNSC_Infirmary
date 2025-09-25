#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"unsci_main","ace_medical_damage","OPTRE_FC_Weapons_Ammo"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

         
    };
};

//#include "CfgEventHandlers.hpp"
#include "ACE_Medical_Injuries.hpp"
#include "CfgAmmo.hpp"
