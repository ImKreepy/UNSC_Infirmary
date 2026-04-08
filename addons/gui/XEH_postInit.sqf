#include "script_component.hpp"

if !(hasInterface) exitWith {};

[ACEQGVAR(medical_gui,updateBodyImage), LINKFUNC(updateBodyImage)] call CBA_fnc_addEventHandler;
