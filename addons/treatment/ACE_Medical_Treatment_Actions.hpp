class ACE_Medical_Treatment_Actions {
    class BasicBandage {
        condition = QFUNC(canBandage);
    };
    class UNSCI_RemoveBlamite: BasicBandage {
        displayName = "Remove Blamite";
        displayNameProgress = "Removing Blamite...";
        icon = "";
        category = "bandage";
        items[] = {};

        treatmentLocations = QGVAR(locationTreat_Impalement);
        allowSelfTreatment = QGVAR(allowSelfTreat_Impalement);
        medicRequired = QGVAR(medicRequired_Impalement);

        treatmentTime = QFUNC(getBlamiteTreatmentTime);
        condition = QFUNC(canRemoveBlamite);
        callbackSuccess = "";
        callbackStart = "";
        callbackProgress = QFUNC(removingBlamiteProgress);
        
        consumeItem = 0; // setting can be 0,1,2 - only 1 will consume items[]
        litter[] = {{""}};
    };
    class UNSCI_RemoveSpike: UNSCI_RemoveBlamite {
        displayName = "Remove Spike";
        displayNameProgress = "Removing Spike...";

        treatmentTime = QFUNC(getSpikeTreatmentTime);
        condition = QFUNC(canRemoveSpike);
        callbackProgress = QFUNC(removingSpikeProgress);
    };
    class UNSCI_Biofoam: BasicBandage {
        displayName = "Biofoam";
        displayNameProgress = "Applying Biofoam...";
        icon = "\OPTRE_weapons\items\icons\biofoam.paa";
        category = "bandage";
        items[] = {"UNSCI_Biofoam"};
        
        callbackSuccess = QFUNC(biofoam);

        //sounds[] = {{QPATHTO_R(sounds\Inject.ogg),1,1,50}};
        litter[] = {{"UNSCI_Biofoam_Item"}};
    };
    class UNSCI_Medigel: BasicBandage {
        displayName = "Medigel";
        displayNameProgress = "Applying Medigel...";
        icon = "\OPTRE_weapons\items\icons\biofoam.paa";
        items[] = {"UNSCI_Medigel"};

        callbackSuccess = QFUNC(medigel);

        //sounds[] = {{QPATHTO_R(sounds\Inject.ogg),1,1,50}};
        litter[] = {{"UNSCI_Medigel_Item"}};
    };
    class UNSCI_Medkit: BasicBandage {
        displayName = "Medical Kit";
        displayNameProgress = "Applying Medical Kit...";
        icon = "\OPTRE_weapons\items\icons\medkit.paa";
        items[] = {"UNSCI_Medkit"};

        condition = QFUNC(canMedkit);
        treatmentTime = QFUNC(getMedkitTreatmentTime);
        callbackSuccess = QFUNC(medkit);

        sounds[] = {{"z\ace\addons\medical_treatment\sounds\Inject.ogg",1,1,50}};
        litter[] = {{"UNSCI_Medkit_Item"}};
    };
};
