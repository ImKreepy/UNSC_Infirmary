#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        url = ECSTRING(main,URL);
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"unsci_main","ace_medical_gui"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

         
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "gui.hpp"
