#include "SBZShoutTargetComponent.h"

void USBZShoutTargetComponent::MakeComponentsShoutTargetable(TArray<UPrimitiveComponent*> Components) {
}

void USBZShoutTargetComponent::MakeComponentShoutTargetable(UPrimitiveComponent* Component) {
}

FVector USBZShoutTargetComponent::GetTargetLocation() {
    return FVector{};
}

bool USBZShoutTargetComponent::CheckPriority_Implementation(AActor* TargetedBy, float& OutBase, float& OutDistMod) {
    return false;
}

USBZShoutTargetComponent::USBZShoutTargetComponent() {
    this->bEnabled = true;
    this->BasePriority = 1;
    this->DistModPriority = 1;
    this->bUseDirectHits = true;
    this->bRequiresVisibility = true;
    this->bRequiresOwnerAliveIfCharacter = true;
    this->Action = ESBZShoutActionType::None;
    this->CustomOutline = NULL;
    this->CustomVoice = ESBZVoiceComment::None;
    this->bUseCustomGesture = false;
    this->CustomGesture = ESBZPlayerGestureType::None;
    this->CustomDuration = 1;
    this->bUseBoundsCenter = true;
    this->bUseAllActorOutlines = false;
    this->PositionComponent = NULL;
    this->OutlineComponent = NULL;
}

