class ACE_Medical_Treatment_Actions {
    class BasicBandage {
        displayName = ACECSTRING(medical_treatment,Bandage);
        displayNameProgress = ACECSTRING(medical_treatment,Bandaging);
        condition = QFUNC(canBandage);
    };
    class RemoveImpalement: BasicBandage {
        displayName = "Remove Impalement";
        displayNameProgress = "Removing Impalement...";
        icon = "";
        category = "bandage";
        items[] = {};

        treatmentLocations = QEGVAR(impalement,locationRemoval);
        allowSelfTreatment = QEGVAR(impalement,allowSelfRemoval);
        medicRequired = QEGVAR(impalement,medicRemoval);

        treatmentTime = QEFUNC(impalement,getRemovalTime);
        condition = QEFUNC(impalement,canRemove);
        callbackSuccess = "";
        callbackStart = "";
        callbackProgress = QEFUNC(impalement,removingProgress);
        
        consumeItem = 0; // setting can be 0,1,2 - only 1 will consume items[]
        litter[] = {{""}};
    };
};
