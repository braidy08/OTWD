#include "SBZTankShield.h"
#include "Components/StaticMeshComponent.h"

void ASBZTankShield::SetIgnoreDamage(bool bIgnore) {
}

void ASBZTankShield::ReplenishShield() {
}

void ASBZTankShield::OnStaggerTimeEnd() {
}

void ASBZTankShield::OnStaggerExit() {
}

void ASBZTankShield::OnStaggerEnter() {
}

void ASBZTankShield::OnRep_Owner() {
}

void ASBZTankShield::OnParentKilled(ASBZCharacter* KilledCharacter) {
}

void ASBZTankShield::OnParentGrappleStateChanged(ESBZGrappleState NewState, const FSBZGrappleEventStateProperties& EventProperties) {
}

void ASBZTankShield::Multicast_DetachShield_Implementation() {
}



float ASBZTankShield::GetRequiredDamage() const {
    return 0.0f;
}

float ASBZTankShield::GetAccumulatedDamage() const {
    return 0.0f;
}

ASBZTankShield::ASBZTankShield() {
    this->DefaultRequiredDamage = 1;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->StaggerTime = 1;
    this->DetachedLifeTime = 1;
    this->OwnerCharacter = NULL;
    this->TankComponent = NULL;
    this->Alertness = NULL;
    this->HitShieldAudioEvent2D = NULL;
}

