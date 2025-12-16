#include "SBZModularMeshComponent.h"
#include "Net/UnrealNetwork.h"

USBZModularMeshComponent::USBZModularMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bUseAsyncSpawning = true;
    this->MaterialReplacements = NULL;
    this->BaseRigComponent = NULL;
    this->BaseRigPrimitiveComponent = NULL;
    this->BaseRigSkeletalMeshComponent = NULL;
}

void USBZModularMeshComponent::UpdateInstancedComponentsFromBaseRig() {
}

void USBZModularMeshComponent::SpawnModularMesh(bool bSynchronously) {
}

void USBZModularMeshComponent::SetModularParts(const TArray<FSBZModularPart>& Parts) {
}

void USBZModularMeshComponent::SetBaseRigComponent(USceneComponent* NewBaseRigComponent) {
}

bool USBZModularMeshComponent::IsSpawningComponents() const {
    return false;
}

FBoxSphereBounds USBZModularMeshComponent::GetTightBounds() const {
    return FBoxSphereBounds{};
}

FBoxSphereBounds USBZModularMeshComponent::GetSlotTightBounds(USBZWeaponPartSlot* PartSlot) const {
    return FBoxSphereBounds{};
}

TArray<UMeshComponent*> USBZModularMeshComponent::GetSlotMeshComponents(USBZWeaponPartSlot* PartSlot) const {
    return TArray<UMeshComponent*>();
}

FBoxSphereBounds USBZModularMeshComponent::GetSlotBounds(USBZWeaponPartSlot* PartSlot) const {
    return FBoxSphereBounds{};
}

TArray<UMeshComponent*> USBZModularMeshComponent::GetMeshComponents() const {
    return TArray<UMeshComponent*>();
}

USceneComponent* USBZModularMeshComponent::GetComponentBySocket(const FName& InSocketName, bool bUseBaseRigAsDefault) {
    return NULL;
}

FBoxSphereBounds USBZModularMeshComponent::GetBounds() const {
    return FBoxSphereBounds{};
}

void USBZModularMeshComponent::AddModularParts(const TArray<FSBZModularPart>& Parts) {
}

void USBZModularMeshComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZModularMeshComponent, MaterialReplacements);
}


