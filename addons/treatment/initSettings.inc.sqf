// ----- Blamite and Spikes Settings -----
[
    QGVAR(locationTreat_Impalement),
    "LIST",
    ["Remove Impalement Locations", "Areas where Blamite and Spikes can be removed"],
    [QUOTE(PREFIX_BEAUTIFIED), "Blamite and Spikes"],
    [[0, 1, 2, 3, 4], ["Anywhere", "Vehicle", "Medical Facilities", "Vehicles And Facilities", "Disabled"], 0],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[
    QGVAR(allowSelfTreat_Impalement),
    "LIST",
    ["Allow Self Impalement Removal", "Can a unit remove their own Blamite and Spikes."],
    [QUOTE(PREFIX_BEAUTIFIED), "Blamite and Spikes"],
    [[0, 1, 2], ["No", "Yes", "Doctors"], 1],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[
    QGVAR(medicRequired_Impalement),
    "LIST",
    ["Medic Required", "Is a medic required to remove Blamite and Spikes."],
    [QUOTE(PREFIX_BEAUTIFIED), "Blamite and Spikes"],
    [[0, 1, 2], ["Anyone", "Medics", "Doctors"], 0],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[
    QGVAR(treatmentTime_Imapalement),
    "SLIDER",
    ["Time To Remove a Impalement", "Time to remove a single Blamite and Spikes."],
    [QUOTE(PREFIX_BEAUTIFIED), "Blamite and Spikes"],
    [0.1, 60, 5, 1],
    true,
    {},
    false
] call CBA_fnc_addSetting;

// ----- Medical Kit Settings -----
[
    QGVAR(treatmentTime_medkit),
    "SLIDER",
    ["Medical Kit Treatment Time", "Time to treat a single wound with a Medical Kit."],
    [QUOTE(PREFIX_BEAUTIFIED), "Medical Kits"],
    [0.1, 5, 1, 1],
    true,
    {},
    false
] call CBA_fnc_addSetting;
/* [
    QGVAR(medkitFullHeals),
    "CHECKBOX",
    ["Full Heal Medical Kit", "If enabled, Medical Kits will fully heal the patient."],
    [QUOTE(PREFIX_BEAUTIFIED), "Medical Kits"],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting; */
