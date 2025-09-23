#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON)};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

         
    };
};

#include "ACE_Medical_Injuries.hpp"
