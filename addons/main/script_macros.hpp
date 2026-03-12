#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

/*
 A template for how I label class names
    PREFIX_ITEM_PART_EXTRA
    unsci_biofoam_base_unsc

 A template for how I label textures
    prefix_type_part_extra_co
    unsci_biofoam_base_green_co
*/

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #undef PREPMAIN
    #define PREP(fncName) FUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName))
    #define PREPMAIN(fncName) FUNCMAIN(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName))
#else
    #undef PREP
    #undef PREPMAIN
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName)), QFUNC(fncName)] call CBA_fnc_compileFunction
    #define PREPMAIN(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName)), QFUNCMAIN(fncName)] call CBA_fnc_compileFunction
#endif

#define LINKFUNC(var) QUOTE(MAINPREFIX\PREFIX\addons\COMPONENT\functions\FUNC(var))

#define ACE_PREFIX ace
#define ACEGVAR(module,var) TRIPLES(ACE_PREFIX,module,var)
#define ACEFUNC(module,var) TRIPLES(ACE_PREFIX,module,DOUBLES(fnc,var))
#define ACEQGVAR(module,var) QUOTE(ACEGVAR(module,var))
#define ACEQFUNC(module,var) QUOTE(ACEFUNC(module,var))
#define ACECSTRING(module,var) QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,module),var))

#include "script_medical_macros.hpp"
