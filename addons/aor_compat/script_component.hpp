#define COMPONENT aor_compat
#define COMPONENT_BEAUTIFIED Age of Reckoning Compatibility

#include "\ik\unsci\addons\main\script_mod.hpp"

#include "\ik\unsci\addons\main\script_macros.hpp"

#define AOR_PREFIX aor
#define AORGVAR(var) TRIPLES(AOR_PREFIX,medical_ace,var)
#define AORFUNC(var) TRIPLES(AOR_PREFIX,medical_ace,fnc_##var)
#define AORQGVAR(var) QUOTE(AORGVAR(var))
#define AORQFUNC(var) QUOTE(AORFUNC(var))
#define AORLSTRING(var) QUOTE(TRIPLES(STR,DOUBLES(AOR_PREFIX,medical_ace),var))
#define AORCSTRING(var) QUOTE(TRIPLES($STR,DOUBLES(AOR_PREFIX,medical_ace),var))

#include "script_medical_macros.hpp"
