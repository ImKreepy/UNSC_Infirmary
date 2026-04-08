class CfgAmmo {
    class OPTRE_FC_Bolt_Base;
    class OPTRE_M41_Rocket_ATGM2;
	class OPTRE_sticky_explosion_base;
    class OPTRE_B_127x99_Ball;
    class APERSBoundingMine_Range_Ammo;
    class M_NLAW_AT_F;
    class M_Titan_AA;
    class Rocket_04_HE_F;
    class ammo_AAA_Gun35mm_AA;
    class M_70mm_SAAMI;
    class M_Air_AA;
    class ammo_Missile_LongRangeAABase;
    class G_40mm_HE;

    // ----- Plasma Ammo Types -----
    // ----- Blue Plasma -----
    class OPTRE_FC_T51_Repeater_Bolt : OPTRE_FC_Bolt_Base {
        ACE_damageType ="UNSCI_PlasmaBolt";
    };
    class OPTRE_FC_T25_Rifle_Bolt : OPTRE_FC_T51_Repeater_Bolt {
        ACE_damageType ="UNSCI_PlasmaBolt";
    };

    // ----- Red Plasma -----
    class OPTRE_FC_T51J_Repeater_Bolt : OPTRE_FC_T51_Repeater_Bolt {
        ACE_damageType ="UNSCI_PlasmaBolt";
    };
    class OPTRE_FC_T25J_Rifle_Bolt : OPTRE_FC_T51J_Repeater_Bolt {
        ACE_damageType ="UNSCI_PlasmaBolt";
    };

    // ----- Green Plasma -----
    class OPTRE_FC_PlasmaPistol_Bolt : OPTRE_FC_Bolt_Base {
        ACE_damageType ="UNSCI_PlasmaBolt";
    };
    class OPTRE_FC_T51_Rod : OPTRE_FC_Bolt_Base {
        ACE_damageType ="UNSCI_PlasmaBolt";
    };

    // ----- Pink Plasma -----
    class OPTRE_FC_T50_SRS_Bolt : OPTRE_FC_T51_Rod {
        ACE_damageType ="UNSCI_PlasmaBolt";
    };

    // ----- Explosives -----
	class OPTRE_sticky_plasma_explosion : OPTRE_sticky_explosion_base {
        ACE_damageType = "UNSCI_PlasmaGrenade";
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
    class OPTRE_FC_HeavyPlasma_Bolt_AG : G_40mm_HE {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_C2_Cannon_Bolt : OPTRE_FC_T51_Repeater_Bolt {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_T33_FuelRod_Veh : Rocket_04_HE_F {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_T33_FuelRod_VehAA : M_70mm_SAAMI {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_T33_FuelRod_VehAA_Ultra : OPTRE_FC_T33_FuelRod_VehAA {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_T33_FuelRod_VehATGM : OPTRE_M41_Rocket_ATGM2 {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_T33_FuelRod_VehATGM_Ultra : OPTRE_FC_T33_FuelRod_VehATGM {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_T46_Rod : OPTRE_B_127x99_Ball {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };
    class OPTRE_FC_T46_Rod_Red : OPTRE_FC_T46_Rod {
        ACE_damageType = "UNSCI_PlasmaExplosive";
    };

    // ----- Blamite Ammo Types -----
	class OPTRE_FC_Needler_ammo : OPTRE_FC_Bolt_Base {
        ACE_damageType = "UNSCI_Blamite";
    };
    class OPTRE_FC_Blamite_Shards : OPTRE_FC_Needler_ammo {
        ACE_damageType = "UNSCI_Blamite";
    };

	class OPTRE_FC_NeedleMine_Dispenser_Needle_Mine : APERSBoundingMine_Range_Ammo {
        ACE_damageType = "UNSCI_BlamiteExplosive";
    };
    class OPTRE_FC_HeavyNeedle : OPTRE_FC_HeavyPlasma_Bolt_AG {
        ACE_damageType = "UNSCI_BlamiteExplosive";
    };
    class OPTRE_FC_T33_FuelRod_VehATGM_Needler : OPTRE_FC_T33_FuelRod_VehATGM {
        ACE_damageType = "UNSCI_BlamiteExplosive";
    };
    class OPTRE_FC_T46_Rod_Needler : OPTRE_FC_T46_Rod {
        ACE_damageType = "UNSCI_BlamiteExplosive";
    };
    class OPTRE_AA_Big_Needler_ammo : M_Air_AA {
        ACE_damageType = "UNSCI_BlamiteExplosive";
    };
    class OPTRE_AA_SAM_Needler_ammo : ammo_Missile_LongRangeAABase {
        ACE_damageType = "UNSCI_BlamiteExplosive";
    };
};
