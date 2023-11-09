#include "SBZGhostModeHandlerComponent.h"
#include "Net/UnrealNetwork.h"

void USBZGhostModeHandlerComponent::ShowGhost(USBZInteractableComponent* InInteractable, bool bShow) {
}

void USBZGhostModeHandlerComponent::Server_SetGhostModeEnableForAll(bool bActive) {
}

USBZInteractableComponent* USBZGhostModeHandlerComponent::Server_AddGhostInteraction(ESBZGhostInteractionDataSlot Slot, USBZInteractableComponent* InInteractable) {
    return NULL;
}

void USBZGhostModeHandlerComponent::OnRep_GhostInteractableLinks() {
}

void USBZGhostModeHandlerComponent::OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

void USBZGhostModeHandlerComponent::OnInteractionStateChanged(USBZInteractableComponent* GhostInteractable, bool bEnabled) {
}

void USBZGhostModeHandlerComponent::OnGhostInteractableHighlightMeshesChanged(USBZInteractableComponent* GhostInteractable) {
}

void USBZGhostModeHandlerComponent::Init() {
}

ESBZGhostInteractionDataSlot USBZGhostModeHandlerComponent::GetGhostInteractionDataSlot(USBZInteractableComponent* InGhostInteractable) {
    return ESBZGhostInteractionDataSlot::INVALID;
}

FSBZGhostInteractionData USBZGhostModeHandlerComponent::GetGhostInteractionDataBySlot(ESBZGhostInteractionDataSlot Slot) {
    return FSBZGhostInteractionData{};
}

USBZInteractableComponent* USBZGhostModeHandlerComponent::GetAssociatedRegularInteractable(USBZInteractableComponent* InGhostInteractable) {
    return NULL;
}

USBZInteractableComponent* USBZGhostModeHandlerComponent::GetAssociatedGhostInteractable(USBZInteractableComponent* InInteractable) {
    return NULL;
}

void USBZGhostModeHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZGhostModeHandlerComponent, GhostInteractableLinks);
}

USBZGhostModeHandlerComponent::USBZGhostModeHandlerComponent() {
}

