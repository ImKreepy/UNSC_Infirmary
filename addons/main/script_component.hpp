#define COMPONENT main
#define COMPONENT_BEAUTIFIED Main
#include "script_mod.hpp"

//#define DEBUG_MODE_FULL
//#define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_MAIN
	#define DEBUG_MODE_FULL
#endif
	#ifdef DEBUG_SETTINGS_MAIN
	#define DEBUG_SETTINGS DEBUG_SETTINGS_MAIN
#endif

#include "script_macros.hpp"

#define ACE_Medical QUOTE(ace_medical_engine),QUOTE(ace_medical),QUOTE(ace_medical_status),QUOTE(ace_medical_vitals),QUOTE(ace_medical_statemachine)
