#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        url = ECSTRING(main,URL);
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"unsci_main","unsci_damage","unsci_treatment","aor_medical_ace"};
        units[] = {};
        weapons[] = {};
        ammos[] = {
            "AOR_PlasmaSmall_Base",
            "AOR_PlasmaMedium_Base",
            "AOR_LauncherRocket_Base",
            "AOR_LauncherMissile_Base",
            "AOR_SpikeAmmo_Base",
            "AoR_StalkerRifle_Bolt",
            "AOR_SpikeGrenade_Ammo"
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
#include "ACE_Medical_Injuries.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "\z\aor\addons\medical_ace\CfgAmmo.hpp"
