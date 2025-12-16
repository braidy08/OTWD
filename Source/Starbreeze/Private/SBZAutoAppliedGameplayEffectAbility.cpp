#include "SBZAutoAppliedGameplayEffectAbility.h"

USBZAutoAppliedGameplayEffectAbility::USBZAutoAppliedGameplayEffectAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::NonInstanced;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
}


