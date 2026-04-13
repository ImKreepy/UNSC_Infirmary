#include "script_component.hpp"

[ACEQGVAR(medical_treatment,medicationLocal), FUNC(medicationLocal)] call CBA_fnc_addEventHandler;
[QGVAR(polypseudomorphineLocal), FUNC(polypseudomorphineLocal)] call CBA_fnc_addEventHandler;
[QGVAR(stimulantLocal), FUNC(stimulantLocal)] call CBA_fnc_addEventHandler;
[QGVAR(biofoamPTXLocal), FUNC(biofoamPTXLocal)] call CBA_fnc_addEventHandler;

// Only GUI items beyond this point
if !(hasInterface) exitWith {};

[ACEQGVAR(medical_gui,updateBodyImage), FUNC(updateBodyImage)] call CBA_fnc_addEventHandler;
