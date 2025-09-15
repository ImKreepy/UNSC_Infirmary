#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"unsci_main","OPTRE_FC_Weapons","OPTRE_FC_Weapons_Ammo",NEEDLE_REQS};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
