#include "SBZCharacterPinningComponent.h"

USBZCharacterPinningComponent::USBZCharacterPinningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningCharacter = NULL;
    this->DefeatSettings = NULL;
}

bool USBZCharacterPinningComponent::StopPinningTheActor(AActor* ActorToRelease, bool bCallRemovePinnedActor) {
    return false;
}

bool USBZCharacterPinningComponent::RemovePinnedActor(AActor* LeavingActor, bool bCallStopPinningTheActor) {
    return false;
}

void USBZCharacterPinningComponent::ReleaseAllPinnedAndPinVictimActors() {
}

bool USBZCharacterPinningComponent::PinActor(AActor* PinnedActor, ESBZPinningType PinningType, bool bWarnPinnedActor) {
    return false;
}

void USBZCharacterPinningComponent::OnOwningCharacterKilled(ASBZCharacter* KilledCharacter) {
}

void USBZCharacterPinningComponent::OnAlignmentSlotStatusChanged(ESBZAlignSlotState InState, AActor* Occupant) {
}

void USBZCharacterPinningComponent::HandlePinnedCharacterTeleported(ASBZCharacter* Character) {
}

void USBZCharacterPinningComponent::HandlePinnedActorDestroyed(AActor* DespawnedActor) {
}

void USBZCharacterPinningComponent::HandleAlignmentSlotAvailabilityToggled(bool bIsNowAnyAvailable) {
}

bool USBZCharacterPinningComponent::GetPinnedByActor(AActor* IncomingPinningActor, ESBZPinningType PinningType, bool bWarnIncomingPinningActor, bool bCheckIsAlreadyPinningActor) {
    return false;
}

int32 USBZCharacterPinningComponent::GetCurrentPinningActorsNumber() const {
    return 0;
}

int32 USBZCharacterPinningComponent::GetCurrentPinnedActorsNumber() const {
    return 0;
}


