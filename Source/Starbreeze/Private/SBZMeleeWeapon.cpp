#include "SBZMeleeWeapon.h"
#include "SBZDamageStrengthEffect.h"
#include "SBZMeleeAttributeSet.h"

void ASBZMeleeWeapon::Shove() {
}

void ASBZMeleeWeapon::Server_Shove_Implementation(const TArray<FSBZMeleeShovePrediction>& InShovePredictionArray) {
}
bool ASBZMeleeWeapon::Server_Shove_Validate(const TArray<FSBZMeleeShovePrediction>& InShovePredictionArray) {
    return true;
}

void ASBZMeleeWeapon::Server_PerformHit_Implementation(const FMeleeHitBoxResult& Prediction) {
}
bool ASBZMeleeWeapon::Server_PerformHit_Validate(const FMeleeHitBoxResult& Prediction) {
    return true;
}

void ASBZMeleeWeapon::Server_MeleeSwingStarted_Implementation(bool bInIsMeleeLightAttack) {
}
bool ASBZMeleeWeapon::Server_MeleeSwingStarted_Validate(bool bInIsMeleeLightAttack) {
    return true;
}

void ASBZMeleeWeapon::Server_MeleeShoveStarted_Implementation() {
}
bool ASBZMeleeWeapon::Server_MeleeShoveStarted_Validate() {
    return true;
}

void ASBZMeleeWeapon::Server_IncrementAttackSequence_Implementation(FIncrementAttackSequencePrediction InPrediction) {
}
bool ASBZMeleeWeapon::Server_IncrementAttackSequence_Validate(FIncrementAttackSequencePrediction InPrediction) {
    return true;
}

void ASBZMeleeWeapon::Multicast_Shove_Implementation(const TArray<FSBZMeleeShovePrediction>& InShovePredictionArray) {
}

void ASBZMeleeWeapon::Multicast_PerformHit_Implementation(const FMeleeHitBoxResult& Prediction) {
}

void ASBZMeleeWeapon::Multicast_MeleeSwingStarted_Implementation(bool bInIsMeleeLightAttack) {
}

void ASBZMeleeWeapon::Multicast_MeleeShoveStarted_Implementation() {
}

void ASBZMeleeWeapon::Multicast_IncrementAttackSequence_Implementation(FIncrementAttackSequencePrediction InPrediction) {
}

void ASBZMeleeWeapon::Hit(const EMeleeAttackCategory& AttackCategory, const FVector& EffectDirection, const FVector& ForceDirection, float DecalAngle) {
}

ASBZMeleeWeapon::ASBZMeleeWeapon() {
    this->MeleeAttributeSet = CreateDefaultSubobject<USBZMeleeAttributeSet>(TEXT("SBZMeleeAttributeSet"));
    this->UIMeleeSpeed = 1;
    this->OnAttackCommittedEffect = USBZDamageStrengthEffect::StaticClass();
    this->MeleeWeaponType = ESBZMeleeWeaponType::Blunt;
    this->MaximumImpactEffectsPerActor = 0;
    this->CurrentHeavyAttackIndex = 0;
    this->CurrentLightAttackIndex = 0;
    this->FirstPersonPlayerMeleeWeaponAnimations = NULL;
    this->ThirdPersonPlayerMeleeWeaponAnimations = NULL;
    this->FirstPersonWeaponMeleeWeaponAnimations = NULL;
    this->ThirdPersonWeaponMeleeWeaponAnimations = NULL;
    this->SwingEvent = NULL;
    this->HitEvent = NULL;
    this->ShoveHitEvent = NULL;
    this->HeavyNoiseData = NULL;
    this->LightNoiseData = NULL;
}

