#include "SBZPickupItem.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

void ASBZPickupItem::SetPickedUp(ASBZCharacter* Character) {
}

void ASBZPickupItem::Remove(bool bDestroyItem) {
}

void ASBZPickupItem::OnRep_PickedUpState(ESBZPickedUpState OldState) {
}

void ASBZPickupItem::OnRep_ChangedOwner(ASBZCharacter* OldCharacter) {
}

void ASBZPickupItem::OnPickup(ASBZCharacter* Character) {
}

void ASBZPickupItem::OnIsRelevantChanged(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor, bool bIsRelevant) {
}

void ASBZPickupItem::OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

void ASBZPickupItem::OnInteractionStarted(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor) {
}

void ASBZPickupItem::OnInteractionEnded(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor) {
}

void ASBZPickupItem::NetMulticast_OnPickup_Implementation(ASBZCharacter* Character) {
}

void ASBZPickupItem::Multicast_Remove_Implementation() {
}

void ASBZPickupItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPickupItem, PickedUpState);
    DOREPLIFETIME(ASBZPickupItem, OwnerCharacter);
}

ASBZPickupItem::ASBZPickupItem() {
    this->PickedUpState = ESBZPickedUpState::NotSet;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("InteractableComponent"));
    this->OwnerCharacter = NULL;
}

