#include "SBZMeleeWeapon.h"
#include "SBZDamageStrengthEffect.h"
#include "SBZMeleeAttributeSet.h"

ASBZMeleeWeapon::ASBZMeleeWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeleeAttributeSet = CreateDefaultSubobject<USBZMeleeAttributeSet>(TEXT("SBZMeleeAttributeSet"));
    this->UIMeleeSpeed = 1;
    this->OnAttackCommittedEffect = USBZDamageStrengthEffect::StaticClass();
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

void ASBZMeleeWeapon::Server_MeleeShoveBlockStarted_Implementation(bool bIsBlock) {
}
bool ASBZMeleeWeapon::Server_MeleeShoveBlockStarted_Validate(bool bIsBlock) {
    return true;
}

void ASBZMeleeWeapon::Server_MeleeBlockEnded_Implementation() {
}
bool ASBZMeleeWeapon::Server_MeleeBlockEnded_Validate() {
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

void ASBZMeleeWeapon::Multicast_MeleeShoveBlockStarted_Implementation(bool bIsBlock) {
}

void ASBZMeleeWeapon::Multicast_MeleeBlockEnded_Implementation() {
}

void ASBZMeleeWeapon::Multicast_IncrementAttackSequence_Implementation(FIncrementAttackSequencePrediction InPrediction) {
}

bool ASBZMeleeWeapon::IsShoveLast() const {
    return false;
}

bool ASBZMeleeWeapon::IsLightAttackLast() const {
    return false;
}

void ASBZMeleeWeapon::Hit(const EMeleeAttackCategory& AttackCategory, const FVector& EffectDirection, const FVector& ForceDirection, float DecalAngle) {
}


