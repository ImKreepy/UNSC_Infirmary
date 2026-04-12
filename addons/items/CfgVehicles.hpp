class CfgVehicles
{
    // ----- Items -----
    class Item_Base_F;
    class UNSCI_Item_Base: Item_Base_F {
        scope = 0;
        scopeCurator = 0;
        displayName = "";
        author = AUTHOR;
        vehicleClass = "Items";
        editorCategory = "UNSCI_EdCat_Items";
    };

    class UNSCI_Biofoam_Item: UNSCI_Item_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "UNSCI_EdSubCat_Bandages";
        displayName = "[UNSCI] Biomedical Foam";
        class TransportMagazines {
            class _xx_UNSCI_Biofoam {
                magazine = "UNSCI_Biofoam";
                count = 1;
            };
        };
    };

    class UNSCI_MediGel_Canister_Item: UNSCI_Item_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "UNSCI_EdSubCat_Bandages";
        displayName = "[UNSCI] MediGel Canister";
        class TransportMagazines {
            class _xx_UNSCI_Medigel_Canister {
                magazine = "UNSCI_Medigel_Canister";
                count = 1;
            };
        };
    };

    class UNSCI_MediGel_40ml_Item: UNSCI_Item_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "UNSCI_EdSubCat_Bandages";
        displayName = "[UNSCI] MediGel (40ml)";
        class TransportMagazines {
            class _xx_UNSCI_Medigel_40ml {
                magazine = "UNSCI_Medigel_40ml";
                count = 1;
            };
        };
    };

    class UNSCI_Medkit_Item: UNSCI_Item_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "UNSCI_EdSubCat_Bandages";
        displayName = "[UNSCI] Medical Kit";
        class TransportItems {
            class _xx_UNSCI_Medkit {
                name = "UNSCI_Medkit";
                count = 1;
            };
        };
    };

    class UNSCI_MedkitPlasmaIV_Item: UNSCI_Item_Base {
        scope = 0;
        scopeCurator = 0;
        editorSubcategory = "UNSCI_EdSubCat_Bandages";
        displayName = "[UNSCI] Plasma IV (2500ml)";
        class TransportItems {
            class _xx_UNSCI_MedkitPlasmaIV {
                name = "UNSCI_MedkitPlasmaIV";
                count = 1;
            };
        };
    };

    class UNSCI_Injector_Stimulant_Item: UNSCI_Item_Base {
        scope = 2;
        scopeCurator = 2;
        icon = QPATHTOF(icons\unsci_injector_icon_ca.paa);
        editorSubcategory = "UNSCI_EdSubCat_Medication";
        displayName = "[UNSCI] Stimulant Autoinjector";
        class TransportItems {
            class _xx_UNSCI_Injector_Stimulant {
                name = "UNSCI_Injector_Stimulant";
                count = 1;
            };
        };
    };

    class UNSCI_Injector_Morphine_Item: UNSCI_Item_Base {
        scope = 2;
        scopeCurator = 2;
        icon = QPATHTOF(icons\unsci_injector_icon_ca.paa);
        editorSubcategory = "UNSCI_EdSubCat_Medication";
        displayName = "[UNSCI] Morphine Autoinjector";
        class TransportItems {
            class _xx_UNSCI_Injector_Morphine {
                name = "UNSCI_Injector_Morphine";
                count = 1;
            };
        };
    };

    class UNSCI_Injector_Epinephrine_Item: UNSCI_Item_Base {
        scope = 2;
        scopeCurator = 2;
        icon = QPATHTOF(icons\unsci_injector_icon_ca.paa);
        editorSubcategory = "UNSCI_EdSubCat_Medication";
        displayName = "[UNSCI] Epinephrine Autoinjector";
        class TransportItems {
            class _xx_UNSCI_Injector_Epinephrine {
                name = "UNSCI_Injector_Epinephrine";
                count = 1;
            };
        };
    };

    // ----- Props -----
    class ThingX;
    class UNSCI_Prop_Base: ThingX  {
        scope = 0;
        scopeCurator = 0;
        displayName = "";
        author = AUTHOR;
        vehicleClass = "Props";
        editorCategory = "UNSCI_EdCat_Props";
    };

    class UNSCI_Biofoam_Prop: UNSCI_Prop_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "UNSCI_EdSubCat_Bandages";
        displayName = "[UNSCI] Biomedical Foam";
        model = "\OPTRE_Weapons\items\Biofoam.p3d";
    };

    class UNSCI_MediGel_Canister_Prop: UNSCI_Prop_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "UNSCI_EdSubCat_Bandages";
        displayName = "[UNSCI] MediGel Canister";
        model = "\OPTRE_Weapons\items\Medigel.p3d";
    };

    class UNSCI_MediGel_40ml_Prop: UNSCI_Prop_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "UNSCI_EdSubCat_Bandages";
        displayName = "[UNSCI] MediGel (40ml)";
        model = "\ik\unsci\addons\items\data\unsci_medigel_tube.p3d";
    };

    class UNSCI_Medkit_Prop: UNSCI_Prop_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "UNSCI_EdSubCat_Bandages";
        displayName = "[UNSCI] Medical Kit";
        model = "\OPTRE_Weapons\items\MedKit.p3d";
        class ACE_Actions {
            class ACE_MainActions  {
                displayName = "Use Medical Kit";
                distance = 4;
                condition = "true";
                statement = QUOTE([ARR_2(_player,_target)] call FUNC(fullHealAction));
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa";
            };
        };
        class Attributes {
			class UNSCI_Medkit_RespawnTime {
                displayName = "Respawn Timer";
                tooltip = "Sets the time for the Medical Kit to respawn after use.";
                property = QGVAR(medkitRepawnAttribute);
                control = "Edit";
	            expression = "missionNamespace setVariable ['unsci_items_medkitRepawnTimer', _value]";
                defaultValue = 5;
                validate = "number";
                typeName = "NUMBER";
			};
		};
    };

    class UNSCI_Injector_Stimulant_Prop: UNSCI_Prop_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "UNSCI_EdSubCat_Medication";
        displayName = "[UNSCI] Stimulant Autoinjector";
        model = QPATHTOF(data\unsci_injector.p3d);
    };

    class UNSCI_Injector_Morphine_Prop: UNSCI_Injector_Stimulant_Prop {
        displayName = "[UNSCI] Morphine Autoinjector";
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\unsci_injector_base_co.paa),QPATHTOF(data\injector\unsci_injector_Cap_co.paa),QPATHTOF(data\injector\unsci_injector_morphine_co.paa)};
    };

    class UNSCI_Injector_Epinephrine_Prop: UNSCI_Injector_Stimulant_Prop {
        displayName = "[UNSCI] Epinephrine Autoinjector";
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\unsci_injector_base_co.paa),QPATHTOF(data\injector\unsci_injector_Cap_co.paa),QPATHTOF(data\injector\unsci_injector_epinephrine_co.paa)};
    };

    // ----- Litter -----
    class ACE_MedicalLitterBase;
    class UNSCI_Biofoam_litter: ACE_MedicalLitterBase {
        model = "\OPTRE_ACE_Compat\data\BiofoamLitter.p3d";
    };
    class UNSCI_Medigel_litter: ACE_MedicalLitterBase {
        model = "\OPTRE_Weapons\Items\Medigel.p3d";
    };
    class UNSCI_Medkit_litter: ACE_MedicalLitterBase {
        model = "\OPTRE_Weapons\Items\MedKit.p3d";
    };
};
