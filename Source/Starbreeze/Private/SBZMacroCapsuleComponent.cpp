#include "SBZMacroCapsuleComponent.h"

void UDEPRECATED_SBZMacroCapsuleComponent::DeactivateCollision(const FSBZMacroCollisionHandle& Handle) {
}

FSBZMacroCollisionHandle UDEPRECATED_SBZMacroCapsuleComponent::ActivateCollisionInSphere(const UObject* WorldContextObject, const FVector& Origin, const float Radius) {
    return FSBZMacroCollisionHandle{};
}

FSBZMacroCollisionHandle UDEPRECATED_SBZMacroCapsuleComponent::ActivateCollisionInLine(const UObject* WorldContextObject, const FVector& Start, const FVector& End) {
    return FSBZMacroCollisionHandle{};
}

FSBZMacroCollisionHandle UDEPRECATED_SBZMacroCapsuleComponent::ActivateCollisionInBox(const UObject* WorldContextObject, const FVector& Origin, const FQuat& Rotation, const FVector& Size) {
    return FSBZMacroCollisionHandle{};
}

UDEPRECATED_SBZMacroCapsuleComponent::UDEPRECATED_SBZMacroCapsuleComponent() {
}

