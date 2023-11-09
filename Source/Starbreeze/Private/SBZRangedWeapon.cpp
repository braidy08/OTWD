#include "SBZRangedWeapon.h"
#include "Net/UnrealNetwork.h"
#include "SBZRangedWeaponAttributeSet.h"

void ASBZRangedWeapon::StopReload_Implementation(bool bInIsReloadInterrupted) {
}

void ASBZRangedWeapon::StopReload(bool bInIsReloadInterrupted) {
}

void ASBZRangedWeapon::StopFire(bool bInIsInterrupted) {
}

bool ASBZRangedWeapon::StartReload() {
    return false;
}

void ASBZRangedWeapon::StartFire() {
}

void ASBZRangedWeapon::StartAutoFireAkEvent() {
}

void ASBZRangedWeapon::SetPartShots_Implementation(ESBZRangedWeaponModuleType Type, int32 InNewShotsFired) {
}

void ASBZRangedWeapon::SetPartRemainingPercent_Implementation(ESBZRangedWeaponModuleType Type, float InNewRemainingPercent) {
}

void ASBZRangedWeapon::Server_StopReload_Implementation(bool bInIsReloadInterrupted) {
}
bool ASBZRangedWeapon::Server_StopReload_Validate(bool bInIsReloadInterrupted) {
    return true;
}

void ASBZRangedWeapon::Server_ShowGlint_Implementation() {
}
bool ASBZRangedWeapon::Server_ShowGlint_Validate() {
    return true;
}

void ASBZRangedWeapon::Server_SetUnjamming_Implementation(bool bInIsUnjamming, bool bInIsInterrupted, float InUnjammingSpeed) {
}
bool ASBZRangedWeapon::Server_SetUnjamming_Validate(bool bInIsUnjamming, bool bInIsInterrupted, float InUnjammingSpeed) {
    return true;
}

void ASBZRangedWeapon::Server_SetJamming_Implementation(bool bInIsJamming) {
}
bool ASBZRangedWeapon::Server_SetJamming_Validate(bool bInIsJamming) {
    return true;
}

void ASBZRangedWeapon::Server_ReloadStart_Implementation() {
}
bool ASBZRangedWeapon::Server_ReloadStart_Validate() {
    return true;
}

void ASBZRangedWeapon::Server_JamWeapon_Implementation() {
}
bool ASBZRangedWeapon::Server_JamWeapon_Validate() {
    return true;
}

void ASBZRangedWeapon::Server_HideGlint_Implementation() {
}
bool ASBZRangedWeapon::Server_HideGlint_Validate() {
    return true;
}

void ASBZRangedWeapon::Server_FireWeaponContinuousEnd_Implementation(bool bInIsInterrupted) {
}
bool ASBZRangedWeapon::Server_FireWeaponContinuousEnd_Validate(bool bInIsInterrupted) {
    return true;
}

void ASBZRangedWeapon::Server_FireWeaponContinuousBegin_Implementation() {
}
bool ASBZRangedWeapon::Server_FireWeaponContinuousBegin_Validate() {
    return true;
}

void ASBZRangedWeapon::Server_FireWeapon_Implementation(const FProjectileHitScanResult& Prediction) {
}
bool ASBZRangedWeapon::Server_FireWeapon_Validate(const FProjectileHitScanResult& Prediction) {
    return true;
}

void ASBZRangedWeapon::ReloadStart_Implementation() {
}

bool ASBZRangedWeapon::PickupAmmo(ESBZAmmoContainerType ContainerType, int32& PickedUpAmount, float Ratio) {
    return false;
}

void ASBZRangedWeapon::OnRep_WeaponConfiguration() {
}

void ASBZRangedWeapon::OnRep_UnjamState() {
}

void ASBZRangedWeapon::OnRep_SilencerRespawnShots() {
}

void ASBZRangedWeapon::OnRep_PartsEnabled() {
}

void ASBZRangedWeapon::OnRep_Magazine() {
}

void ASBZRangedWeapon::OnRep_GlintActive() {
}

void ASBZRangedWeapon::OnReloaded() {
}

void ASBZRangedWeapon::OnEquipAnimationStarted() {
}

void ASBZRangedWeapon::NetMulticast_StopReload_Implementation(bool bInIsReloadInterrupted) {
}

void ASBZRangedWeapon::NetMulticast_ReloadStart_Implementation() {
}

void ASBZRangedWeapon::NetMulticast_FireWeaponContinuousEnd_Implementation(bool bInIsInterrupted) {
}

void ASBZRangedWeapon::NetMulticast_FireWeaponContinuousBegin_Implementation() {
}

void ASBZRangedWeapon::NetMulticast_FireWeapon_Implementation(const FProjectileHitScanResult& Prediction) {
}

void ASBZRangedWeapon::Multicast_SetUnjamming_Implementation(bool bInIsUnjamming, bool bInIsInterrupted, float InUnjammingSpeed) {
}

void ASBZRangedWeapon::Multicast_SetJamming_Implementation(bool bInIsJamming) {
}

void ASBZRangedWeapon::Multicast_JamWeapon_Implementation() {
}

void ASBZRangedWeapon::Multicast_AmmoPickup_Implementation(ASBZPlayerCharacter* OwnerCharacter, ESBZWeaponFamily WeaponFamily, ESBZWeaponSlotType Slot, int16 Amount) {
}

void ASBZRangedWeapon::JamWeapon() {
}

bool ASBZRangedWeapon::IsWeaponJammed() const {
    return false;
}

bool ASBZRangedWeapon::IsReloading() {
    return false;
}

bool ASBZRangedWeapon::IsRecovering() const {
    return false;
}

bool ASBZRangedWeapon::IsPartEnabled(ESBZRangedWeaponModuleType Type) const {
    return false;
}

bool ASBZRangedWeapon::IsInventoryAmmoFull() {
    return false;
}

bool ASBZRangedWeapon::IsIdle() const {
    return false;
}

bool ASBZRangedWeapon::IsGradualReloadMode() {
    return false;
}

bool ASBZRangedWeapon::IsFiring() const {
    return false;
}

bool ASBZRangedWeapon::HaveFiredOnce() const {
    return false;
}

bool ASBZRangedWeapon::GetPartShots(ESBZRangedWeaponModuleType Type, int32& OutShotsFired, int32& OutMaxShots) const {
    return false;
}

float ASBZRangedWeapon::GetPartRemainingPercent(ESBZRangedWeaponModuleType Type) const {
    return 0.0f;
}

USBZModularWeaponPartComponent* ASBZRangedWeapon::GetPart(ESBZRangedWeaponModuleType Type, bool bCanGetUnequipped) const {
    return NULL;
}

FVector2D ASBZRangedWeapon::GetCurrentRecoilShotMultiplier() const {
    return FVector2D{};
}

int32 ASBZRangedWeapon::GetAmmoLoadedOnLastIncrease() const {
    return 0;
}

int32 ASBZRangedWeapon::GetAmmoLoaded(bool bIncludeAmmoInBarrel) const {
    return 0;
}

int32 ASBZRangedWeapon::GetAmmoInventory() const {
    return 0;
}

void ASBZRangedWeapon::DryFire() {
}

void ASBZRangedWeapon::Client_UnjamWeapon_Implementation() {
}

bool ASBZRangedWeapon::CheckIsCurrentlyEquiped() const {
    return false;
}

bool ASBZRangedWeapon::CanReload() {
    return false;
}

bool ASBZRangedWeapon::CanFire() {
    return false;
}

float ASBZRangedWeapon::BarrelGetCurrentSpreadAngle() {
    return 0.0f;
}

void ASBZRangedWeapon::AddAmmoPercentage_Implementation(float Percentage) {
}
bool ASBZRangedWeapon::AddAmmoPercentage_Validate(float Percentage) {
    return true;
}

void ASBZRangedWeapon::AddAmmoAmount_Implementation(int32 Amount) {
}
bool ASBZRangedWeapon::AddAmmoAmount_Validate(int32 Amount) {
    return true;
}

void ASBZRangedWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZRangedWeapon, WeaponConfiguration);
    DOREPLIFETIME(ASBZRangedWeapon, SilencerRespawnShots);
    DOREPLIFETIME(ASBZRangedWeapon, PartsEnabled);
    DOREPLIFETIME(ASBZRangedWeapon, bGlintActive);
    DOREPLIFETIME(ASBZRangedWeapon, Magazine);
    DOREPLIFETIME(ASBZRangedWeapon, bWeaponUnjamState);
}

ASBZRangedWeapon::ASBZRangedWeapon() {
    this->FiringForceFeedbackEffect = NULL;
    this->CameraOffsetADSDistance = 1;
    this->TargetingBoneName = TEXT("L_Sight");
    this->NormalMagnification = 1;
    this->TargetingMagnification = 1;
    this->GlintEffect = NULL;
    this->MaximumPenetratedActorsCount = 0;
    this->ChanceToNotKillZombiesOnFirstHit = 1;
    this->FirstPersonPlayerRangedWeaponAnimations = NULL;
    this->ThirdPersonPlayerRangedWeaponAnimations = NULL;
    this->FirstPersonWeaponRangedWeaponAnimations = NULL;
    this->ThirdPersonWeaponRangedWeaponAnimations = NULL;
    this->EnterTargetingEvent = NULL;
    this->ExitTargetingEvent = NULL;
    this->SilencerBreakEvent = NULL;
    this->BulletSlot = NULL;
    this->SpawnDistanceForBarrelShellEffect = 1;
    this->SilencerRespawnShots = 0;
    this->BarrelFireEffect = NULL;
    this->BarrelShellEffect = NULL;
    this->BarrelTraceEffect = NULL;
    this->SpawnedGlintEffectComponent = NULL;
    this->PartsEnabled = 0;
    this->bGlintActive = false;
    this->RangedWeaponAttributeSet = CreateDefaultSubobject<USBZRangedWeaponAttributeSet>(TEXT("SBZRangedWeaponAttributeSet"));
    this->bAllowJamOnLastShot = false;
    this->bWeaponUnjamState = false;
    this->InnerClusterNumber = 0;
    this->InnerClusterSpreadMultiplier = 1;
    this->PieOcclusion = 1;
}

