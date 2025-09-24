class CfgAmmo {
    class OPTRE_FC_Bolt_Base;
    class OPTRE_M41_Rocket_ATGM2;
    class OPTRE_B_127x99_Ball;
    class APERSBoundingMine_Range_Ammo;
    class M_NLAW_AT_F;
    class M_Titan_AA;
    class Rocket_04_HE_F;
    class ammo_AAA_Gun35mm_AA;
    class M_70mm_SAAMI;
    class M_Air_AA;
    class ammo_Missile_LongRangeAABase;

    // ----- Plasma Ammo Types -----
    class OPTRE_FC_T51_Repeater_Bolt : OPTRE_FC_Bolt_Base {
        ACE_damageType = "UNSCI_PlasmaBolt";
    };
    class OPTRE_FC_PlasmaPistol_Bolt : OPTRE_FC_Bolt_Base {
        ACE_damageType = "UNSCI_PlasmaBolt";
    };
    class OPTRE_FC_T51_Rod : OPTRE_FC_Bolt_Base {
        ACE_damageType = "UNSCI_PlasmaBolt";
    };
    class OPTRE_FC_T33_FuelRod : M_NLAW_AT_F {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_T33_FuelRod_Guided : M_Titan_AA {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_HeavyPlasma_Bolt_AAA : ammo_AAA_Gun35mm_AA {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_HeavyPlasma_Bolt_AAG : ammo_AAA_Gun35mm_AA {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_HeavyPlasma_Bolt_AG : ammo_AAA_Gun35mm_AA {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_T33_FuelRod_Veh : Rocket_04_HE_F {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_T33_FuelRod_VehAA : M_70mm_SAAMI {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_T33_FuelRod_VehATGM : OPTRE_M41_Rocket_ATGM2 {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_T46_Rod : OPTRE_B_127x99_Ball {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };

    // ----- Blamite Ammo Types -----
	class OPTRE_FC_Needler_ammo: OPTRE_FC_Bolt_Base {
        ACE_damageType = "UNSCI_Blamite";
    };

	class OPTRE_FC_NeedleMine_Dispenser_Needle_Mine: APERSBoundingMine_Range_Ammo {
        ACE_damageType = "UNSCI_BlamiteExplosive";
    };
    class OPTRE_AA_Big_Needler_ammo : M_Air_AA {
        ACE_damageType = "UNSCI_BlamiteExplosive";
    };
    class OPTRE_FC_HeavyNeedle : OPTRE_FC_HeavyPlasma_Bolt_AG {
        ACE_damageType = "UNSCI_BlamiteExplosive";
    };
    class OPTRE_AA_SAM_Needler_ammo : ammo_Missile_LongRangeAABase {
        ACE_damageType = "UNSCI_BlamiteExplosive";
    };
};
