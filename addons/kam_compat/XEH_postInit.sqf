#include "script_component.hpp"

[QGVAR(stimulantLocal), FUNC(stimulantLocal)] call CBA_fnc_addEventHandler;
[QGVAR(biofoamPneumothoraxLocal), FUNC(biofoamPneumothoraxLocal)] call CBA_fnc_addEventHandler;

// Only GUI items beyond this point
if !(hasInterface) exitWith {};

[ACEQGVAR(medical_gui,updateBodyImage), FUNC(updateBodyImage)] call CBA_fnc_addEventHandler;
