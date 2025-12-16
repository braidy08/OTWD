#include "SBZAIRangedAttackHandlerBaseComponent.h"

USBZAIRangedAttackHandlerBaseComponent::USBZAIRangedAttackHandlerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CoverPoint = NULL;
    this->OwnerCharacter = NULL;
    this->MemoryComponent = NULL;
    this->AggroComponent = NULL;
}

ERangedAttackState USBZAIRangedAttackHandlerBaseComponent::GetCurrentAttackState() const {
    return ERangedAttackState::Idle;
}


