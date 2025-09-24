[
    QGVAR(locationRemoval),
    "LIST",
    ["Remove Impalement Locations", "Areas where impalements can be removed"],
    [QUOTE(PREFIX_BEAUTIFIED), "Blamite and Spikes"],
    [[0, 1, 2, 3, 4], ["Anywhere", "Vehicle", "Medical Facilities", "Vehicles And Facilities", "Disabled"], 0],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[
    QGVAR(allowSelfRemoval),
    "LIST",
    ["Allow Self Impalement Removal", "Can a unit remove their own impalements"],
    [QUOTE(PREFIX_BEAUTIFIED), "Blamite and Spikes"],
    [[0, 1, 2], ["No", "Yes", "Doctors"], 1],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[
    QGVAR(medicRemoval),
    "LIST",
    ["Medic Required", "Is a medic required to remove impalements"],
    [QUOTE(PREFIX_BEAUTIFIED), "Blamite and Spikes"],
    [[0, 1, 2], ["Anyone", "Medics", "Doctors"], 0],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[
    QGVAR(treatmentTimeRemoval),
    "SLIDER",
    ["Remove Impalement Time", "Time to remove a impalement"],
    [QUOTE(PREFIX_BEAUTIFIED), "Blamite and Spikes"],
    [0.1, 60, 5, 1],
    true,
    {},
    true
] call CBA_fnc_addSetting;
