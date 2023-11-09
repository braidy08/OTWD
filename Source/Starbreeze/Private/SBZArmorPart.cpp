#include "SBZArmorPart.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

void ASBZArmorPart::SetStaticMesh(UStaticMesh* NewStaticMesh) {
}

void ASBZArmorPart::ReplenishArmor() {
}

void ASBZArmorPart::PopArmor(const FVector& HitDirection) {
}

void ASBZArmorPart::OnRep_StaticMesh() {
}

void ASBZArmorPart::Multicast_PopArmor_Implementation(FVector HitDirection) {
}

bool ASBZArmorPart::HasPopped() const {
    return false;
}

UStaticMeshComponent* ASBZArmorPart::GetMesh() const {
    return NULL;
}

float ASBZArmorPart::GetDurabilityMaximum() const {
    return 0.0f;
}

float ASBZArmorPart::GetDurabilityCurrent() const {
    return 0.0f;
}

void ASBZArmorPart::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZArmorPart, StaticMesh);
}

ASBZArmorPart::ASBZArmorPart() {
    this->DefaultDurability = 1;
    this->StaticMesh = NULL;
    this->ParentCharacter = NULL;
    this->Alertness = NULL;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->DetachedArrmorPartLifeTime = 1;
    this->DirectionalImpulse = 1;
    this->HitImpulse = 1;
    this->TorqueImpulse = 1;
    this->bApplyLeftoverDamage = true;
    this->HitArmorAudioEvent2D = NULL;
    this->PopAudioEvent2D = NULL;
    this->PopAudioEvent3D = NULL;
}

