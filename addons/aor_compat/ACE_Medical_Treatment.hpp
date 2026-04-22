class ACE_Medical_Treatment {
    class Bandaging {
        class FieldDressing;
        class UNSCI_Biofoam : FieldDressing {
            KILL_WOUND_TYPES_AOR;
            AOR_BIOFOAM_INJURIES;
        };
        class UNSCI_MediGel : FieldDressing {
            KILL_WOUND_TYPES_AOR;
            AOR_MEDIGEL_INJURIES;
        };
        class UNSCI_Medkit : FieldDressing {
            KILL_WOUND_TYPES_AOR;
            AOR_MEDKIT_INJURIES;
        };
    };
};
