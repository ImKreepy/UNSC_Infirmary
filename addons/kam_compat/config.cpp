#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"unsci_main","kat_breathing"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "ACE_Medical_Injuries.hpp"
