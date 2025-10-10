#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"unsci_main","ace_medical_treatment"};
        units[] = {
            "UNSCI_Biofoam_Item",
            "UNSCI_Medigel_Item",
            "UNSCI_Medkit_Item",
            "UNSCI_MedkitPlasmaIV_Item",
            "UNSCI_Injector_Stimulant_Item",
            "UNSCI_Injector_Morphine_Item",
            "UNSCI_Injector_Epinephrine_Item"
        };
        weapons[] = {
            "UNSCI_Biofoam",
            "UNSCI_Medigel",
            "UNSCI_Medkit",
            "UNSCI_MedkitPlasmaIV",
            "UNSCI_Injector_Stimulant",
            "UNSCI_Injector_Morphine",
            "UNSCI_Injector_Epinephrine"
        };
        VERSION_CONFIG;

         
    };
};

#include "CfgEventHandlers.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
