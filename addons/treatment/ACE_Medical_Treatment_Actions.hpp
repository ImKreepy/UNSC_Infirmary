class ACE_Medical_Treatment_Actions {
    class BasicBandage {
        condition = QFUNC(canBandage);
    };
    class RemoveBlamite: BasicBandage {
        displayName = "Remove Blamite";
        displayNameProgress = "Removing Blamite...";
        icon = "";
        category = "bandage";
        items[] = {};

        treatmentLocations = QGVAR(locationRemoval);
        allowSelfTreatment = QGVAR(allowSelfRemoval);
        medicRequired = QGVAR(medicRemoval);

        treatmentTime = QFUNC(getBlamiteTreatmentTime);
        condition = QFUNC(canRemoveBlamite);
        callbackSuccess = "";
        callbackStart = "";
        callbackProgress = QFUNC(removingBlamiteProgress);
        
        consumeItem = 0; // setting can be 0,1,2 - only 1 will consume items[]
        litter[] = {{""}};
    };
    class RemoveSpike: BasicBandage {
        displayName = "Remove Spike";
        displayNameProgress = "Removing Spike...";

        treatmentTime = QFUNC(getSpikeTreatmentTime);
        condition = QFUNC(canRemoveSpike);
        callbackProgress = QFUNC(removingSpikeProgress);
    };
};
