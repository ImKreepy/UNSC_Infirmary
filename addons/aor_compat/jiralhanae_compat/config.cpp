#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        url = ECSTRING(main,URL);
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON),"unsci_damage_jiralhanae_compat"};
        units[] = {};
        weapons[] = {};
        ammos[] = {
            "comp21_spike_ammo",
            "comp21_grenade_spike_ammo"
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgAmmo.hpp"
