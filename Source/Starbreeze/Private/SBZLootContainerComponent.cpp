#include "SBZLootContainerComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

USBZLootContainerComponent::USBZLootContainerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->InteractionTemplate = NULL;
    this->MaxLootCapacity = 0;
    this->MaxPickUpDistributionRadius = 1;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("InteractableComponent"));
    this->InteractableState = ESBZLootInteractableState::Closed;
    this->NumExtraInteractables = 0;
}

void USBZLootContainerComponent::SetNumInteractables(uint8 InNumInteractables) {
}

void USBZLootContainerComponent::SetAllInteractablesEnabled(bool bShouldEnable) {
}

void USBZLootContainerComponent::OnRep_InteractableState(ESBZLootInteractableState OldState) {
}

void USBZLootContainerComponent::OnRep_ExtraInteractableStates(const TArray<ESBZLootInteractableState>& OldExtraStates) {
}

void USBZLootContainerComponent::OnRep_ExtraInteractables() {
}

void USBZLootContainerComponent::OnItemsChanged(const TArray<FSBZAutoPickUpItemCount>& Items) {
}

void USBZLootContainerComponent::OnIsRelevantChanged(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor, bool bIsRelevant) {
}

void USBZLootContainerComponent::OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

void USBZLootContainerComponent::OnInteractionStarted(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor) {
}

void USBZLootContainerComponent::OnInteractionEnded(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor) {
}

void USBZLootContainerComponent::InteractionSpawnPickUpLoot(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

uint8 USBZLootContainerComponent::GetNumInteractables() const {
    return 0;
}

int32 USBZLootContainerComponent::GetMaxLootCapacity() const {
    return 0;
}

void USBZLootContainerComponent::GetInteractableStates(TArray<ESBZLootInteractableState>& OutStates) const {
}

ESBZLootInteractableState USBZLootContainerComponent::GetInteractableStateByIndex(uint8 InteractableIndex) const {
    return ESBZLootInteractableState::Closed;
}

ESBZLootInteractableState USBZLootContainerComponent::GetInteractableState(USBZInteractableComponent* Interactable) const {
    return ESBZLootInteractableState::Closed;
}

int32 USBZLootContainerComponent::GetInteractableIndex(USBZInteractableComponent* Interactable) const {
    return 0;
}

void USBZLootContainerComponent::GetInteractableComponents(TArray<USBZInteractableComponent*>& OutComponents) const {
}

USBZInteractableComponent* USBZLootContainerComponent::GetInteractableByIndex(uint8 InteractableIndex) const {
    return NULL;
}

void USBZLootContainerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZLootContainerComponent, InteractableState);
    DOREPLIFETIME(USBZLootContainerComponent, ExtraInteractables);
    DOREPLIFETIME(USBZLootContainerComponent, ExtraInteractableStates);
}


