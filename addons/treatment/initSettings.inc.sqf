// ----- Blamite and Spikes Settings -----
[
    QGVAR(locationTreat_Impalement),
    "LIST",
    [CSTRING(LocationTreat_Impalement_DisplayName), CSTRING(LocationTreat_Impalement_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(BlamiteAndSpikes_Category)],
    [[0, 1, 2, 3, 4], [ACECSTRING(common,Anywhere), ACECSTRING(common,Vehicle), ACECSTRING(medical_treatment,MedicalFacilities), ACECSTRING(medical_treatment,VehiclesAndFacilities), ACECSTRING(common,Disabled)], 0],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[
    QGVAR(allowSelfTreat_Impalement),
    "LIST",
    [CSTRING(AllowSelfTreat_Impalement_DisplayName), CSTRING(AllowSelfTreat_Impalement_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(BlamiteAndSpikes_Category)],
    [[0, 1, 2], [ACECSTRING(common,No), ACECSTRING(common,Yes), ACECSTRING(medical_treatment,Doctors)], 1],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[
    QGVAR(medicRequired_Impalement),
    "LIST",
    [CSTRING(MedicRequired_Impalement_DisplayName), CSTRING(MedicRequired_Impalement_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(BlamiteAndSpikes_Category)],
    [[0, 1, 2], [ACECSTRING(medical_treatment,Anyone), ACECSTRING(medical_treatment,Medics), ACECSTRING(medical_treatment,Doctors)], 0],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[
    QGVAR(treatmentTime_Impalement),
    "SLIDER",
    [CSTRING(TreatmentTime_Impalement_DisplayName), CSTRING(TreatmentTime_Impalement_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(BlamiteAndSpikes_Category)],
    [0.1, 60, 5, 1],
    true,
    {},
    false
] call CBA_fnc_addSetting;

// ----- Medical Kit Settings -----
[
    QGVAR(medkitFullHeals),
    "CHECKBOX",
    [CSTRING(MedkitFullHeals_DisplayName), CSTRING(MedkitFullHeals_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(Medkits_Category)],
    [true],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[
    QGVAR(timeCoefficient_medkitFull),
    "SLIDER",
    [CSTRING(TimeCoefficient_MedkitFull_DisplayName), CSTRING(TimeCoefficient_MedkitFull_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(Medkits_Category)],
    [0.1, 5, 1, 1],
    true,
    {},
    false
] call CBA_fnc_addSetting;
[
    QGVAR(timeCoefficient_medkitPartial),
    "SLIDER",
    [CSTRING(TimeCoefficient_MedkitPartial_DisplayName), CSTRING(TimeCoefficient_MedkitPartial_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(Medkits_Category)],
    [0.1, 5, 1, 1],
    true,
    {},
    false
] call CBA_fnc_addSetting;

// ----- Medication Settings -----
[
    QGVAR(stimulantChance),
    "SLIDER",
    [CSTRING(StimulantChance_DisplayName), CSTRING(StimulantChance_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(Medications_Category)],
    [0, 100, 100, 0],
    true,
    {},
    false
] call CBA_fnc_addSetting;
