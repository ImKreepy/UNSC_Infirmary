class ACE_Medical_Treatment {
    class Bandaging {
        class FieldDressing {
            delete plasmaMinor;
            delete plasmaMedium;
            delete plasmaLarge;
        };
        class PackingBandage : FieldDressing {
            delete plasmaMinor;
            delete plasmaMedium;
            delete plasmaLarge;
        };
        class ElasticBandage : FieldDressing {
            delete plasmaMinor;
            delete plasmaMedium;
            delete plasmaLarge;
        };
        class QuikClot : FieldDressing {
            delete plasmaMinor;
            delete plasmaMedium;
            delete plasmaLarge;
        };

        class OPTRE_Biofoam;
        class MEU_Biofoam: OPTRE_Biofoam {
            delete plasmaMinor;
            delete plasmaMedium;
            delete plasmaLarge;
            UNSCI_PLASMA_BIOFOAM;
        };
        class MEU_Biofoam_Light: OPTRE_Biofoam {
            delete plasmaMinor;
            delete plasmaMedium;
            delete plasmaLarge;
            UNSCI_PLASMA_BIOFOAM;
        };
        class MEU_Emergency_Medkit: OPTRE_Biofoam {
            delete plasmaMinor;
            delete plasmaMedium;
            delete plasmaLarge;
            UNSCI_PLASMA_MEDKIT;
        };

        class OPTRE_Medigel;
        class MEU_Medigel: OPTRE_Medigel {
            delete plasmaMinor;
            delete plasmaMedium;
            delete plasmaLarge;
            UNSCI_PLASMA_MEDIGEL;
        };
        class MEU_Medigel_Light: OPTRE_Medigel {
            delete plasmaMinor;
            delete plasmaMedium;
            delete plasmaLarge;
            UNSCI_PLASMA_MEDIGEL;
        };
    };
};
