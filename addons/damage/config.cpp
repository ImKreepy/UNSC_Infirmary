#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        url = ECSTRING(main,URL);
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"unsci_main","ace_medical_damage","OPTRE_FC_Weapons_Ammo"};
        units[] = {};
        weapons[] = {};
        ammo[] = {
            "OPTRE_FC_T51_Repeater_Bolt",
            "OPTRE_FC_T25_Rifle_Bolt",
            "OPTRE_FC_T51J_Repeater_Bolt",
            "OPTRE_FC_T25J_Rifle_Bolt",
            "OPTRE_FC_PlasmaPistol_Bolt",
            "OPTRE_FC_T51_Rod",
            "OPTRE_FC_T50_SRS_Bolt",
            "OPTRE_sticky_plasma_explosion",
            "OPTRE_FC_T33_FuelRod",
            "OPTRE_FC_T33_FuelRod_Guided",
            "OPTRE_FC_HeavyPlasma_Bolt_AAA",
            "OPTRE_FC_HeavyPlasma_Bolt_AAG",
            "OPTRE_FC_HeavyPlasma_Bolt_AG",
            "OPTRE_FC_C2_Cannon_Bolt",
            "OPTRE_FC_T33_FuelRod_Veh",
            "OPTRE_FC_T33_FuelRod_VehAA",
            "OPTRE_FC_T33_FuelRod_VehAA_Ultra",
            "OPTRE_FC_T33_FuelRod_VehATGM",
            "OPTRE_FC_T33_FuelRod_VehATGM_Ultra",
            "OPTRE_FC_T46_Rod",
            "OPTRE_FC_T46_Rod_Red",
            "OPTRE_FC_Needler_ammo",
            "OPTRE_FC_Blamite_Shards",
            "OPTRE_FC_NeedleMine_Dispenser_Needle_Mine",
            "OPTRE_FC_HeavyNeedle",
            "OPTRE_FC_T33_FuelRod_VehATGM_Needler",
            "OPTRE_FC_T46_Rod_Needler",
            "OPTRE_AA_Big_Needler_ammo",
            "OPTRE_AA_SAM_Needler_ammo"
        };
        VERSION_CONFIG;

         
    };
};

//#include "CfgEventHandlers.hpp"
#include "ACE_Medical_Injuries.hpp"
#include "CfgAmmo.hpp"
