#define COMPONENT kam_compat
#define COMPONENT_BEAUTIFIED KAT Advanced Medical Compatability

#include "\ik\unsci\addons\main\script_mod.hpp"

#include "\ik\unsci\addons\main\script_macros.hpp"

#define KAM_PREFIX kat
#define KAMGVAR(module,var) TRIPLES(KAM_PREFIX,module,var)
#define KAMFUNC(module,var) TRIPLES(KAM_PREFIX,module,fnc_##var)
#define KAMQGVAR(module,var) QUOTE(KAMGVAR(module,var))
#define KAMQFUNC(module,var) QUOTE(KAMFUNC(module,var))
#define KAMLSTRING(module,var) QUOTE(TRIPLES(STR,DOUBLES(KAM_PREFIX,module),var))
#define KAMCSTRING(module,var) QUOTE(TRIPLES($STR,DOUBLES(KAM_PREFIX,module),var))

#define IDC_BODY_TORSO_BIOFOAM      70143
#define POLLYSUE_MAX_TO_SEDATE      5
