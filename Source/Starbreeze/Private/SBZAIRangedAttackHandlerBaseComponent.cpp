#include "SBZAIRangedAttackHandlerBaseComponent.h"

ERangedAttackState USBZAIRangedAttackHandlerBaseComponent::GetCurrentAttackState() const {
    return ERangedAttackState::Idle;
}

USBZAIRangedAttackHandlerBaseComponent::USBZAIRangedAttackHandlerBaseComponent() {
    this->CoverPoint = NULL;
    this->OwnerCharacter = NULL;
    this->MemoryComponent = NULL;
    this->AggroComponent = NULL;
}

