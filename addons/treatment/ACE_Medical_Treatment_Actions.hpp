class ACE_Medical_Treatment_Actions {
    class BasicBandage {
        displayName = ACECSTRING(medical_treatment,Bandage);
        displayNameProgress = ACECSTRING(medical_treatment,Bandaging);
        condition = QFUNC(canBandage);
    };
    class RemoveImpalement: BasicBandage {
        displayName = "Remove Impalement";
        displayNameProgress = "Removing Impalement...";
        icon = QPATHTOF(ui\surgical_kit.paa);
        category = "bandage";
        items[] = {};

        treatmentLocations = QGVAR(locationRemoval);
        allowSelfTreatment = QGVAR(allowSelfRemoval);
        medicRequired = QGVAR(medicRemoval);

        treatmentTime = QFUNC(getRemovalTime);
        condition = QFUNC(canRemoveImpalement);
        callbackSuccess = "";
        callbackStart = "";
        callbackProgress = QFUNC(removingProgress);
        
        consumeItem = 0; // setting can be 0,1,2 - only 1 will consume items[]
        litter[] = {{""}};
    };
};
