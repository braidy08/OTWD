#include "SBZGameplayAbilityCrafting.h"

bool USBZGameplayAbilityCrafting::IsResourceAlreadyFull(const FGameplayAbilityActorInfo& ActorInfo) const {
    return false;
}

void USBZGameplayAbilityCrafting::CraftObjectServerDelegate() {
}

bool USBZGameplayAbilityCrafting::CraftObject(int32 Amount) {
    return false;
}

USBZGameplayAbilityCrafting::USBZGameplayAbilityCrafting() {
    this->AddedResourceGameEffect = NULL;
    this->TimeToHold = 1;
}

