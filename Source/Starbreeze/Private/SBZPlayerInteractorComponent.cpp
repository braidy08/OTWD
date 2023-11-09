#include "SBZPlayerInteractorComponent.h"
#include "Net/UnrealNetwork.h"

void USBZPlayerInteractorComponent::UpdateInteractionData_Implementation(const FSBZInteractionData& InInteractionData) {
}

void USBZPlayerInteractorComponent::StartInteractionServer_Implementation(USBZInteractableComponent* Component) {
}
bool USBZPlayerInteractorComponent::StartInteractionServer_Validate(USBZInteractableComponent* Component) {
    return true;
}

void USBZPlayerInteractorComponent::SetVolumeInteraction(ASBZInteractorVolume* NewInteractorVolume) {
}

void USBZPlayerInteractorComponent::OnRep_InteractionData() {
}

bool USBZPlayerInteractorComponent::IsLocallyControlled() const {
    return false;
}

bool USBZPlayerInteractorComponent::IsInteracting() const {
    return false;
}

void USBZPlayerInteractorComponent::HandleTeleport(ASBZCharacter* Char) {
}

USBZInteractableComponent* USBZPlayerInteractorComponent::GetTargetedInteractable() const {
    return NULL;
}

void USBZPlayerInteractorComponent::EndInteractionServer_Implementation(bool bIsInterrupted) {
}
bool USBZPlayerInteractorComponent::EndInteractionServer_Validate(bool bIsInterrupted) {
    return true;
}

void USBZPlayerInteractorComponent::ClearVolumeInteraction(ASBZInteractorVolume* NewInteractorVolume) {
}

void USBZPlayerInteractorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZPlayerInteractorComponent, InteractionDataServer);
}

USBZPlayerInteractorComponent::USBZPlayerInteractorComponent() {
    this->InteractionWidgetClass = NULL;
    this->TraceChannel = TraceTypeQuery1;
    this->InteractionCameraPitchMin = 1;
    this->InteractionCameraPitchMax = 1;
    this->InteractionCameraYawMin = 1;
    this->InteractionCameraYawMax = 1;
    this->Controller = NULL;
    this->SBZPlayerCharacterOwner = NULL;
    this->InteractionWidget = NULL;
    this->BlockedInteractionTargetable = NULL;
    this->TargetedInteractable = NULL;
    this->TargetedLookAtShape = NULL;
    this->VolumeInteractable = NULL;
    this->PawnOwner = NULL;
}

