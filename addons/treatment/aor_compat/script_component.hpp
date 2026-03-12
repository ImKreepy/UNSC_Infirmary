#define SUBCOMPONENT aor_compat
#define SUBCOMPONENT_BEAUTIFIED Age of Reclamation Compatability

#include "..\script_component.hpp"

#define AOR_PREFIX aor
#define AORGVAR(var) TRIPLES(AOR_PREFIX,medical_ace,var)
#define AORFUNC(var) TRIPLES(AOR_PREFIX,medical_ace,DOUBLES(fnc,var))
#define AORQGVAR(var) QUOTE(AORGVAR(var))
#define AORQFUNC(var) QUOTE(AORFUNC(var))
#define AORCSTRING(var) QUOTE(TRIPLES($STR,DOUBLES(AOR_PREFIX,medical_ace),var))
