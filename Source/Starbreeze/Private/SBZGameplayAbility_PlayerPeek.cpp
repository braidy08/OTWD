#include "SBZGameplayAbility_PlayerPeek.h"

USBZGameplayAbility_PlayerPeek::USBZGameplayAbility_PlayerPeek() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bToggleMode = true;
    this->TargetPeekState = ESBZPeekingState::None;
}


