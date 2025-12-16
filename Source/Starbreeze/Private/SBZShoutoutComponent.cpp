#include "SBZShoutoutComponent.h"

USBZShoutoutComponent::USBZShoutoutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RaytraceTargetFindDist = 1;
    this->MarkingOutlineSchematic = NULL;
    this->ShoutoutTargetLimit = 0;
    this->ShoutoutDuration = 1;
    this->AbilitySystem = NULL;
}

void USBZShoutoutComponent::SetMarkLimit(int32 NewLimit) {
}

void USBZShoutoutComponent::Server_Shoutout_Implementation(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target) {
}
bool USBZShoutoutComponent::Server_Shoutout_Validate(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target) {
    return true;
}

void USBZShoutoutComponent::Multicast_Shoutout_Implementation(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target) {
}

bool USBZShoutoutComponent::IsActorMarked(AActor* Actor) {
    return false;
}


