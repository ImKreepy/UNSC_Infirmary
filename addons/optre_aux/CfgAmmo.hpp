class CfgAmmo {
    class OPTRE_FC_Bolt_Base;
	class OPTRE_FC_Needler_ammo: OPTRE_FC_Bolt_Base {
        ACE_damageType = "Blamite";
    };

    class APERSBoundingMine_Range_Ammo;
	class OPTRE_FC_NeedleMine_Dispenser_Needle_Mine: APERSBoundingMine_Range_Ammo {
        ACE_damageType = "BlamiteExplosive";
    };
	class OPTRE_FC_NeedleMine_Dispenser_Needle_Tall_Mine: OPTRE_FC_NeedleMine_Dispenser_Needle_Mine {};
	class OPTRE_FC_NeedleMine_Dispenser_Needle_Wide_Mine: OPTRE_FC_NeedleMine_Dispenser_Needle_Mine {};
	class OPTRE_FC_NeedleMine_Dispenser_Needle_TallWide_Mine: OPTRE_FC_NeedleMine_Dispenser_Needle_Mine {};
};
