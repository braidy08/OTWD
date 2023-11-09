#include "SBZOutlineComponent.h"
#include "Net/UnrealNetwork.h"

void USBZOutlineComponent::StopUsingPositionComponent() {
}

void USBZOutlineComponent::SetPositionComponent(UPrimitiveComponent* Component) {
}

void USBZOutlineComponent::SetPauseOutlines(bool bVal) {
}

void USBZOutlineComponent::SetHideOutlines(bool bVal) {
}

void USBZOutlineComponent::ReplicatedRemoveOutline(USBZOutlineSchematic* OutlineSchematic) {
}

void USBZOutlineComponent::ReplicatedClearTemporaryOutline(USBZOutlineSchematic* Schematic) {
}

void USBZOutlineComponent::ReplicatedAddTemporaryOutline(USBZOutlineSchematic* Schematic, float Duration) {
}

void USBZOutlineComponent::ReplicatedAddOutline(USBZOutlineSchematic* OutlineSchematic) {
}

void USBZOutlineComponent::RemoveOutlineSchematic(USBZOutlineSchematic* OutlineSchematic) {
}

void USBZOutlineComponent::RemoveOutline(USBZOutlineSchematic* OutlineSchematic) {
}

void USBZOutlineComponent::RemoveMeshComponents(const TArray<UMeshComponent*>& InMeshComponents) {
}

void USBZOutlineComponent::RemoveMeshComponent(UMeshComponent* MeshComponent) {
}

void USBZOutlineComponent::OnRep_ActiveReplicated() {
}

void USBZOutlineComponent::MarkAsDirty() {
}

bool USBZOutlineComponent::IsOutlinePresent(USBZOutlineSchematic* OutlineSchematic) {
    return false;
}

bool USBZOutlineComponent::IsHidden() {
    return false;
}

FVector USBZOutlineComponent::GetPosition() {
    return FVector{};
}

void USBZOutlineComponent::GetMeshComponents(TArray<UMeshComponent*>& OutMeshComponents) const {
}

USBZOutlineSchematic* USBZOutlineComponent::GetDefaultSchematic() {
    return NULL;
}

void USBZOutlineComponent::ClearTemporaryOutline(USBZOutlineSchematic* Schematic) {
}

void USBZOutlineComponent::ClearOutline(USBZOutlineSchematic* OutlineSchematic, bool bClearTemporary, bool bClearReplicatedIfServer) {
}

void USBZOutlineComponent::AddTemporaryOutline(USBZOutlineSchematic* Schematic, float Duration) {
}

void USBZOutlineComponent::AddOutlineSchematic(USBZOutlineSchematic* OutlineSchematic) {
}

void USBZOutlineComponent::AddOutline(USBZOutlineSchematic* OutlineSchematic) {
}

void USBZOutlineComponent::AddMeshComponents(const TArray<UMeshComponent*>& InMeshComponents) {
}

void USBZOutlineComponent::AddMeshComponent(UMeshComponent* MeshComponent) {
}

void USBZOutlineComponent::AddAndSetPositionMeshComponent(UMeshComponent* MeshComponent) {
}

void USBZOutlineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZOutlineComponent, ActiveReplicated);
}

USBZOutlineComponent::USBZOutlineComponent() {
    this->DefaultSchematic = NULL;
    this->bUseBoundsCenter = true;
    this->CurrentActiveMeshComponent = NULL;
    this->ActiveReplicated = NULL;
}

