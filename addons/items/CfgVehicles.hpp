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
        displayName = CSTRING(Biofoam_DisplayName);
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
        displayName = CSTRING(MediGel_DisplayName);
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
        displayName = CSTRING(MediGel_40ml_DisplayName);
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
        displayName = CSTRING(Medkit_DisplayName);
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

    class UNSCI_Syringe_Pollysue_Item: UNSCI_Item_Base {
        scope = 2;
        scopeCurator = 2;
        icon = QPATHTOF(icons\unsci_injector_icon_ca.paa);
        editorSubcategory = "UNSCI_EdSubCat_Medication";
        displayName = CSTRING(Polypseudomorphine_DisplayName);
        class TransportItems {
            class _xx_UNSCI_Syringe_Pollysue {
                name = "UNSCI_Syringe_Pollysue";
                count = 1;
            };
        };
    };

    class UNSCI_Injector_Stimulant_Item: UNSCI_Item_Base {
        scope = 2;
        scopeCurator = 2;
        icon = QPATHTOF(icons\unsci_injector_icon_ca.paa);
        editorSubcategory = "UNSCI_EdSubCat_Medication";
        displayName = CSTRING(Stimulant_DisplayName);
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
        displayName = CSTRING(Morphine_DisplayName);
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
        displayName = CSTRING(Epinephrine_DisplayName);
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
        displayName = CSTRING(Biofoam_DisplayName);
        model = "\OPTRE_Weapons\items\Biofoam.p3d";
    };

    class UNSCI_MediGel_Canister_Prop: UNSCI_Prop_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "UNSCI_EdSubCat_Bandages";
        displayName = CSTRING(MediGel_DisplayName);
        model = "\OPTRE_Weapons\items\Medigel.p3d";
    };

    class UNSCI_MediGel_40ml_Prop: UNSCI_Prop_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "UNSCI_EdSubCat_Bandages";
        displayName = CSTRING(MediGel_40ml_DisplayName);
        model = "\ik\unsci\addons\items\data\unsci_medigel_tube.p3d";
    };

    class UNSCI_Medkit_Prop: UNSCI_Prop_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "UNSCI_EdSubCat_Bandages";
        displayName = CSTRING(Medkit_DisplayName);
        model = "\OPTRE_Weapons\items\MedKit.p3d";
        class ACE_Actions {
            class ACE_MainActions  {
                displayName = CSTRING(Medkit_Action);
                distance = 4;
                condition = "true";
                statement = QUOTE([ARR_2(_player,_target)] call FUNC(fullHealAction));
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa";
            };
        };
        class Attributes {
			class UNSCI_Medkit_RespawnTime {
                displayName = CSTRING(Medkit_RepawnAttribute);
                tooltip = CSTRING(Medkit_RepawnAttribute_ToolTip);
                property = QGVAR(medkitRepawnAttribute);
                control = "Edit";
	            expression = "missionNamespace setVariable ['unsci_items_medkitRepawnTimer', _value]";
                defaultValue = 5;
                validate = "number";
                typeName = "NUMBER";
			};
		};
    };

    class UNSCI_Syringe_Pollysue_Prop: UNSCI_Prop_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "UNSCI_EdSubCat_Medication";
        displayName = CSTRING(Polypseudomorphine_DisplayName);
        model = QPATHTOF(data\unsci_syringe.p3d);
    };

    class UNSCI_Injector_Stimulant_Prop: UNSCI_Prop_Base {
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "UNSCI_EdSubCat_Medication";
        displayName = CSTRING(Stimulant_DisplayName);
        model = QPATHTOF(data\unsci_injector.p3d);
    };

    class UNSCI_Injector_Morphine_Prop: UNSCI_Injector_Stimulant_Prop {
        displayName = CSTRING(Morphine_DisplayName);
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\unsci_injector_base_co.paa),QPATHTOF(data\injector\unsci_injector_Cap_co.paa),QPATHTOF(data\injector\unsci_injector_morphine_co.paa)};
    };

    class UNSCI_Injector_Epinephrine_Prop: UNSCI_Injector_Stimulant_Prop {
        displayName = CSTRING(Epinephrine_DisplayName);
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
