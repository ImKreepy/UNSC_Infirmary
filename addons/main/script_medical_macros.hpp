#include "\z\ace\addons\medical_engine\script_macros_medical.hpp"

// ----- ACE Macros Start -----
#undef VAR_BLOOD_PRESS
#undef VAR_BLOOD_VOL
#undef VAR_WOUND_BLEEDING
#undef VAR_CRDC_ARRST
#undef VAR_HEART_RATE
#undef VAR_SPO2
#undef VAR_OXYGEN_DEMAND
#undef VAR_PAIN
#undef VAR_PAIN_SUPP
#undef VAR_PERIPH_RES
#undef VAR_OPEN_WOUNDS
#undef VAR_BANDAGED_WOUNDS
#undef VAR_STITCHED_WOUNDS
#undef VAR_BODYPART_DAMAGE
#undef VAR_MEDICATIONS
#undef VAR_HEMORRHAGE
#undef VAR_IN_PAIN
#undef VAR_TOURNIQUET
#undef VAR_FRACTURES
#undef GET_BLOOD_LOSS
#undef GET_BLOOD_PRESSURE

#define VAR_BLOOD_PRESS       ACEQGVAR(medical,bloodPressure)
#define VAR_BLOOD_VOL         ACEQGVAR(medical,bloodVolume)
#define VAR_WOUND_BLEEDING    ACEQGVAR(medical,woundBleeding)
#define VAR_CRDC_ARRST        ACEQGVAR(medical,inCardiacArrest)
#define VAR_HEART_RATE        ACEQGVAR(medical,heartRate)
#define VAR_SPO2              ACEQGVAR(medical,spo2)
#define VAR_OXYGEN_DEMAND     ACEQGVAR(medical,oxygenDemand)
#define VAR_PAIN              ACEQGVAR(medical,pain)
#define VAR_PAIN_SUPP         ACEQGVAR(medical,painSuppress)
#define VAR_PERIPH_RES        ACEQGVAR(medical,peripheralResistance)
#define VAR_OPEN_WOUNDS       ACEQGVAR(medical,openWounds)
#define VAR_BANDAGED_WOUNDS   ACEQGVAR(medical,bandagedWounds)
#define VAR_STITCHED_WOUNDS   ACEQGVAR(medical,stitchedWounds)
#define VAR_BODYPART_DAMAGE   ACEQGVAR(medical,bodyPartDamage)
#define VAR_MEDICATIONS       ACEQGVAR(medical,medications)
#define VAR_HEMORRHAGE        ACEQGVAR(medical,hemorrhage)
#define VAR_IN_PAIN           ACEQGVAR(medical,inPain)
#define VAR_TOURNIQUET        ACEQGVAR(medical,tourniquets)
#define VAR_FRACTURES         ACEQGVAR(medical,fractures)
#define GET_BLOOD_LOSS(unit)        ([unit] call ACEFUNC(medical_status,getBloodLoss))
#define GET_BLOOD_PRESSURE(unit)    ([unit] call ACEFUNC(medical_status,getBloodPressure))
// ----- ACE Macros End -----

#define KILL_WOUND_TYPES class UNSCI_BlamiteWound { \
    effectiveness = 0;    \
    reopeningChance = 1;  \
    reopeningMinDelay = 1; \
    reopeningMaxDelay = 1;    \
};    \
class UNSCI_BlamiteWoundMinor : UNSCI_BlamiteWound {};  \
class UNSCI_BlamiteWoundMedium : UNSCI_BlamiteWound {}; \
class UNSCI_BlamiteWoundLarge : UNSCI_BlamiteWound {};  \
class UNSCI_SpikeWound : UNSCI_BlamiteWound {};  \
class UNSCI_SpikeWoundMinor : UNSCI_SpikeWound {};  \
class UNSCI_SpikeWoundMedium : UNSCI_SpikeWound {}; \
class UNSCI_SpikeWoundLarge : UNSCI_SpikeWound {}

#define STIMULANT_PAIN_SUPPRESSION 0.4
#define POLLYSUE_PAIN_SUPPRESSION 0.6
