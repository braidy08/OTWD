#include "SBZThrowAction.h"

void USBZThrowAction::Server_Throw_Implementation(uint8 State, USBZGameplayAbilityThrow* Ability) {
}
bool USBZThrowAction::Server_Throw_Validate(uint8 State, USBZGameplayAbilityThrow* Ability) {
    return true;
}

void USBZThrowAction::Multicast_Throw_Implementation(uint8 State, USBZGameplayAbilityThrow* Ability) {
}

USBZThrowAction::USBZThrowAction() {
    this->CurrentAbility = NULL;
}

