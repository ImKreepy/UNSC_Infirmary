#include "script_component.hpp"

class CfgPatches {
    class MAIN_ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main","cba_xeh",ACE_Medical};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

         
    };
};

class CfgAddons
{
    class PreloadAddons 
    {
        class JaegerMain_Preload
        {
            list[] = {
            "cba_main",
            "cba_xeh",
            QUOTE(MAIN_ADDON)
            };
        };
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
        description = "UNSC Infirmary brings ACE Advanced Medical to the Halo enthusiast";

        //action = "https://discord.gg/FqY9cNzB5n";
        //actionName = "Join Jaeger Company";

        //tooltip = "Jaeger Company Unit Auxiliary";
        //tooltipOwned = "Jaeger Company Unit Auxiliary Owned";

        //picture = "\ik\jc\addons\main\logos\jc_logotitle_512_ca.paa"; // Logo displayed in expansions menu
        //logo = "\ik\jc\addons\main\logos\jc_logo_ca.paa"; // Image displayed on the main menu (128x)
        //logoOver = "\ik\jc\addons\main\logos\jc_logoover_ca.paa"; // Image displayed when the mouse hovers over the image on the main menu (128x)
        //logoSmall = "\ik\jc\addons\main\logos\jc_logo_small_ca.paa"; // Image displayed in Arsenal or 3DEN (32x)

        overview = "This mod adds various medical items, injuries, and treatments that portray the universe of Halo";
        overviewText = "UNSC Infirmary";
        //overviewPicture = "\ik\jc\addons\main\logos\jc_logo_ca.paa";
       // overviewFootnote = "\ik\jc\addons\main\logos\jc_logo_ca.paa";
	};
};
