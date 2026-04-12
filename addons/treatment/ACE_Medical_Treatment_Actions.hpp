class ACE_Medical_Treatment_Actions {
    class BasicBandage {
        condition = QFUNC(canBandage);
    };
    class FieldDressing: BasicBandage {};
    class Morphine: FieldDressing {
        items[] = {"ACE_morphine","UNSCI_Injector_Morphine"};
        litter[] = {{"ACE_MedicalLitter_morphine"}};
    };
    class Epinephrine: Morphine {
        items[] = {"ACE_epinephrine","UNSCI_Injector_Epinephrine"};
        litter[] = {{"ACE_MedicalLitter_Epinephrine"}};
    };
    class UNSCI_Stimulant: Morphine {
        displayName = CSTRING(Stimulant_DisplayName);
        displayNameProgress = CSTRING(Stimulant_DisplayNameProgress);

        items[] = {"UNSCI_Injector_Stimulant"};
        litter[] = {{"ACE_MedicalLitter_morphine"}};
    };
    class UNSCI_RemoveBlamite: BasicBandage {
        displayName = CSTRING(Blamite_DisplayName);
        displayNameProgress = CSTRING(Blamite_DisplayNameProgress);
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
        displayName = CSTRING(Spike_DisplayName);
        displayNameProgress = CSTRING(Spike_DisplayNameProgress);

        treatmentTime = QFUNC(getSpikeTreatmentTime);
        condition = QFUNC(canRemoveSpike);
        callbackProgress = QFUNC(removingSpikeProgress);
    };
    class UNSCI_Biofoam: BasicBandage {
        displayName = CSTRING(Biofoam_DisplayName);
        displayNameProgress = CSTRING(Biofoam_DisplayNameProgress);
        icon = "\OPTRE_weapons\items\icons\biofoam.paa";
        items[] = {"UNSCI_Biofoam"};
        
        callbackSuccess = QFUNC(biofoam);

        sounds[] = {{QPATHTO_R(sounds\unsci_biofoam_use.wav),1,1,50}};
        litter[] = {{"UNSCI_Biofoam_litter"}};
    };
    class UNSCI_MediGel: BasicBandage {
        displayName = CSTRING(MediGel_DisplayName);
        displayNameProgress = CSTRING(MediGel_DisplayNameProgress);
        icon = "\ik\unsci\addons\items\pictures\unsci_medigel_canister_ca.paa";
        items[] = {"UNSCI_MediGel_Canister","UNSCI_MediGel_40ml"};

        callbackSuccess = QFUNC(medigel);

        sounds[] = {{QPATHTO_R(sounds\unsci_medigel_use.wav),1,1,50}};
        //litter[] = {{"UNSCI_Medigel_Item"}};
    };
    class UNSCI_Medkit: BasicBandage {
        displayName = CSTRING(Medkit_DisplayName);
        displayNameProgress = CSTRING(Medkit_DisplayNameProgress);
        icon = "\OPTRE_weapons\items\icons\medkit.paa";
        items[] = {"UNSCI_Medkit"};

        condition = QFUNC(canMedkit);
        treatmentTime = QFUNC(getMedkitTreatmentTime);
        callbackSuccess = QFUNC(medkit);

        //sounds[] = {{QPATHTO_R(sounds\unsci_medkit_use.wav),1,1,50}}; // sound moved to callBackSuccess function to ensure it plays after the treatment time, not at the start of the action
        //litter[] = {{"UNSCI_Medkit_Item"}};
    };
};
