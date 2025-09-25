#define COMPONENT treatment
#define COMPONENT_BEAUTIFIED Treatment

#include "\ik\unsci\addons\main\script_mod.hpp"

#include "\ik\unsci\addons\main\script_macros.hpp"

#define REMOVE_IMPALEMENTS class UNSCI_BlamiteWound {};    \
class UNSCI_BlamiteWoundMinor : UNSCI_BlamiteWound {};  \
class UNSCI_BlamiteWoundMedium : UNSCI_BlamiteWound {}; \
class UNSCI_BlamiteWoundLarge : UNSCI_BlamiteWound {};  \
class UNSCI_SpikeWound : UNSCI_BlamiteWound {};  \
class UNSCI_SpikeWoundMinor : UNSCI_SpikeWound {};  \
class UNSCI_SpikeWoundMedium : UNSCI_SpikeWound {}; \
class UNSCI_SpikeWoundLarge : UNSCI_SpikeWound {}
