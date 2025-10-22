#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"unsci_main"};
        units[] = {
            "UNSCI_Biofoam_Item",
            "UNSCI_MediGel_Canister_Item",
            "UNSCI_MediGel_40ml_Item",
            "UNSCI_Medkit_Item",
            "UNSCI_MedkitPlasmaIV_Item",
            "UNSCI_Injector_Stimulant_Item",
            "UNSCI_Injector_Morphine_Item",
            "UNSCI_Injector_Epinephrine_Item",
            
            "UNSCI_Biofoam_Prop",
            "UNSCI_MediGel_Canister_Prop",
            "UNSCI_MediGel_40ml_Prop",
            "UNSCI_Medkit_Prop",
            "UNSCI_Injector_Stimulant_Prop",
            "UNSCI_Injector_Morphine_Prop",
            "UNSCI_Injector_Epinephrine_Prop"
        };
        weapons[] = {
            // Magazines
            "UNSCI_Biofoam",
            "UNSCI_MediGel_Canister",
            "UNSCI_MediGel_40ml",

            // Weapons
            "UNSCI_BiofoamItem",
            "UNSCI_MediGel_CanisterItem",
            "UNSCI_MediGel_40mlItem",
            "UNSCI_Medkit",
            "UNSCI_MedkitPlasmaIV",
            "UNSCI_Injector_Stimulant",
            "UNSCI_Injector_Morphine",
            "UNSCI_Injector_Epinephrine"
        };
        VERSION_CONFIG;

         
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
