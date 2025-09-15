#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"unsci_main","comp21_common"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
