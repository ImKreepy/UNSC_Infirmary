#include "script_component.hpp"

[ACEQGVAR(medical_treatment,medicationLocal), FUNC(medicationLocal)] call CBA_fnc_addEventHandler;
[QGVAR(stimulantLocal), FUNC(stimulantLocal)] call CBA_fnc_addEventHandler;

private _config = configFile >> "ACE_Medical_Treatment" >> "Medication" >> "UNSCI_Stimulant";
private _stimTimeToEffect = getNumber (_config >> "timeTillMaxEffect");
private _stimTimeInSystem = getNumber (_config >> "timeInSystem");
missionNamespace setVariable [QGVAR(Stim_TimeToEffect), _stimTimeToEffect];
missionNamespace setVariable [QGVAR(Stim_TimeInSystem), _stimTimeInSystem];
