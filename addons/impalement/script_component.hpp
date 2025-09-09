#define COMPONENT impalement
#define COMPONENT_BEAUTIFIED Impalement

#include "\ik\unsci\addons\main\script_mod.hpp"

#include "\ik\unsci\addons\main\script_macros.hpp"

#define IS_IMPALEMENT_OR(var) var isEqualTo "ImpalementWound" || var isEqualTo "BlamiteWound" || var isEqualTo "SpikeWound"
#define IS_IMPALEMENT_AND(var) var isEqualTo "ImpalementWound" && var isEqualTo "BlamiteWound" && var isEqualTo "SpikeWound"
#define NOT_IMPALEMENT_OR(var) var isNotEqualTo "ImpalementWound" || var isNotEqualTo "BlamiteWound" || var isNotEqualTo "SpikeWound"
#define NOT_IMPALEMENT_AND(var) var isNotEqualTo "ImpalementWound" && var isNotEqualTo "BlamiteWound" && var isNotEqualTo "SpikeWound"
