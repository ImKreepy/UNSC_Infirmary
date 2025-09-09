class ACE_Medical_Treatment {
    class Bandaging {
        class BasicBandage {
            class ImpalementWound {
                effectiveness = 0;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            REMOVE_IMPALEMENTS;
        };
        class FieldDressing {
            class ImpalementWound {
                effectiveness = 0;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            REMOVE_IMPALEMENTS;
        };
        class PackingBandage : FieldDressing {
            class ImpalementWound {
                effectiveness = 0;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            REMOVE_IMPALEMENTS;
        };
        class ElasticBandage : FieldDressing {
            class ImpalementWound {
                effectiveness = 0;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            REMOVE_IMPALEMENTS;
        };
        class QuikClot : FieldDressing {
            class ImpalementWound {
                effectiveness = 0;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            REMOVE_IMPALEMENTS;
        };
    };
};
