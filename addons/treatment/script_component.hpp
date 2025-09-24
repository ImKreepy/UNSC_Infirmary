#define COMPONENT treatment
#define COMPONENT_BEAUTIFIED Treatment

#include "\ik\unsci\addons\main\script_mod.hpp"

#include "\ik\unsci\addons\main\script_macros.hpp"

#define REMOVE_IMPALEMENTS class BlamiteWound {};    \
class BlamiteWoundMinor : BlamiteWound {};  \
class BlamiteWoundMedium : BlamiteWound {}; \
class BlamiteWoundLarge : BlamiteWound {};  \
class SpikeWound : BlamiteWound {};  \
class SpikeWoundMinor : SpikeWound {};  \
class SpikeWoundMedium : SpikeWound {}; \
class SpikeWoundLarge : SpikeWound {}
