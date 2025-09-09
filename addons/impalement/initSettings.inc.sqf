[
    QGVAR(locationRemoval),
    "LIST",
    ["Remove Impalement Locations", "Areas where impalements can be removed"],
    ["Jaeger Company", QUOTE(COMPONENT_BEAUTIFIED)],
    [[0, 1, 2, 3, 4], ["Anywhere", "Vehicle", "Medical Facilities", "Vehicles And Facilities", "Disabled"], 0],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[
    QGVAR(allowSelfRemoval),
    "LIST",
    ["Allow Self Impalement Removal", "Can a unit remove their own impalements"],
    ["Jaeger Company", QUOTE(COMPONENT_BEAUTIFIED)],
    [[0, 1, 2], ["No", "Yes", "Doctors"], 1],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[
    QGVAR(medicRemoval),
    "LIST",
    ["Medic Required", "Is a medic required to remove impalements"],
    ["Jaeger Company", QUOTE(COMPONENT_BEAUTIFIED)],
    [[0, 1, 2], ["Anyone", "Medics", "Doctors"], 0],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[
    QGVAR(treatmentTimeRemoval),
    "SLIDER",
    ["Time To Remove a Impalement", "Time to remove a single impalement"],
    ["Jaeger Company", QUOTE(COMPONENT_BEAUTIFIED)],
    [0.1, 60, 5, 1],
    true,
    {},
    true
] call CBA_fnc_addSetting;
