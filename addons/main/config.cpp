#include "script_component.hpp"

class CfgPatches {
    class MAIN_ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        url = ECSTRING(main,URL);
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main","cba_xeh",ACE_MEDICAL,"OPTRE_ACE_Compat"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

         
    };
};

class CfgAddons
{
    class PreloadAddons 
    {
        class UNSCI_Preload
        {
            list[] = {
            "cba_main",
            "cba_xeh",
            QUOTE(MAIN_ADDON)
            };
        };
    };
};

class CfgEditorCategories {
    class UNSCI_EdCat_Items {
        displayName = CSTRING(EdCat_Items);
    };
    class UNSCI_EdCat_Props {
        displayName = CSTRING(EdCat_Props);
    };
};
class CfgEditorSubcategories {
    class UNSCI_EdSubCat_Bandages {
        displayName = CSTRING(EdSubCat_Bandages);
    };
    class UNSCI_EdSubCat_Medication {
        displayName = CSTRING(EdSubCat_Medication);
    };
};

class CfgMods
{
    class Mod_Base;
	class UNSC_Infirmary: Mod_Base
	{
		dir="@UNSC Infirmary";
		name = "UNSC Infirmary";
        author = "Im Kreepy";
        description = CSTRING(Mod_Description);

        action = "https://github.com/ImKreepy/UNSC_Infirmary";
        actionName = "GitHub";

        tooltip = "UNSC Infirmary";
        tooltipOwned = "UNSC Infirmary Owned";

        picture = "\ik\unsci\addons\main\logos\unsci_logotitle_512_ca.paa"; // Logo displayed in expansions menu
        logo = "\ik\unsci\addons\main\logos\unsci_logo_ca.paa"; // Image displayed on the main menu (128x)
        logoOver = "\ik\unsci\addons\main\logos\unsci_logoover_ca.paa"; // Image displayed when the mouse hovers over the image on the main menu (128x)
        logoSmall = "\ik\unsci\addons\main\logos\unsci_logo_small_ca.paa"; // Image displayed in Arsenal or 3DEN (32x)

        overview = CSTRING(Mod_Overview);
        overviewText = "UNSC Infirmary";
        overviewPicture = "\ik\unsci\addons\main\logos\unsci_logo_ca.paa";
        overviewFootnote = "\ik\unsci\addons\main\logos\unsci_logo_ca.paa";
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
