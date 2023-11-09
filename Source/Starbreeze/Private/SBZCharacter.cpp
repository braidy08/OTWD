#include "SBZCharacter.h"
#include "AbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIFactionHideZoneComponent.h"
#include "SBZCharacterMovementMultiplierModifier.h"
#include "SBZCharacterVoiceComponent.h"
#include "SBZDamageType.h"
#include "SBZHealthAttributeSet.h"
#include "SBZLocomotionAttributeSet.h"
#include "SBZOutlineComponent.h"
#include "Templates/SubclassOf.h"

void ASBZCharacter::TakeFallingDamage(float Percentage, const FHitResult& Hit) {
}

void ASBZCharacter::StopShoveRecovery() {
}

bool ASBZCharacter::SetStuck(bool bIsStuck) {
    return false;
}

void ASBZCharacter::SetPeekState(ESBZPeekingState PeekingState) {
}

void ASBZCharacter::SetHelmetPartComponent(USBZArmorPartChildActor* HelmetComponent) {
}

void ASBZCharacter::ServerSetTargeting_Implementation(bool bInIsTargeting) {
}
bool ASBZCharacter::ServerSetTargeting_Validate(bool bInIsTargeting) {
    return true;
}

void ASBZCharacter::ServerEquipWeapon_Implementation(int32 InNewWeaponIndex) {
}
bool ASBZCharacter::ServerEquipWeapon_Validate(int32 InNewWeaponIndex) {
    return true;
}

void ASBZCharacter::Server_Vault_Implementation() {
}
bool ASBZCharacter::Server_Vault_Validate() {
    return true;
}

void ASBZCharacter::Server_UnVault_Implementation() {
}
bool ASBZCharacter::Server_UnVault_Validate() {
    return true;
}

void ASBZCharacter::Server_UnProne_Implementation() {
}
bool ASBZCharacter::Server_UnProne_Validate() {
    return true;
}

void ASBZCharacter::Server_SetPeekState_Implementation(ESBZPeekingState PeekingState) {
}
bool ASBZCharacter::Server_SetPeekState_Validate(ESBZPeekingState PeekingState) {
    return true;
}

void ASBZCharacter::Server_SetGadgetEnabled_Implementation(TSubclassOf<ASBZCharacterGadget> InGadgetClass, bool bInIsEnabled) {
}
bool ASBZCharacter::Server_SetGadgetEnabled_Validate(TSubclassOf<ASBZCharacterGadget> InGadgetClass, bool bInIsEnabled) {
    return true;
}

void ASBZCharacter::Server_Prone_Implementation() {
}
bool ASBZCharacter::Server_Prone_Validate() {
    return true;
}

void ASBZCharacter::Server_InterruptShoveRecovery_Implementation() {
}
bool ASBZCharacter::Server_InterruptShoveRecovery_Validate() {
    return true;
}

void ASBZCharacter::Server_DropFromLedge_Implementation() {
}
bool ASBZCharacter::Server_DropFromLedge_Validate() {
    return true;
}

void ASBZCharacter::Server_ClimbLedge_Implementation() {
}
bool ASBZCharacter::Server_ClimbLedge_Validate() {
    return true;
}

void ASBZCharacter::SaySystemComment(ESBZVoiceComment Comment, bool bReplicated, ESBZVoicePriority InPlayingPriority) {
}

void ASBZCharacter::ResetWeaponSlots(int32 NewWeaponSlotCount) {
}

void ASBZCharacter::ReplaceWeaponInSlot(int32 WeaponSlot, ASBZWeapon* ReplacementWeapon) {
}

void ASBZCharacter::RemoveWaypoint() {
}

void ASBZCharacter::RefreshGrappleTags() {
}

void ASBZCharacter::OnWakeup(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void ASBZCharacter::OnShoveRecoveryEnd_Implementation() {
}

void ASBZCharacter::OnShoveApplied_Implementation(const FVector& Impulse, const float RecoveryDuration, AActor* ShoveInstigator, const bool bIsNewShove) {
}

void ASBZCharacter::OnRep_ReplicatedPeekingState() {
}

void ASBZCharacter::OnRep_ReplicatedIsVaulted() {
}

void ASBZCharacter::OnRep_ReplicatedIsSliding() {
}

void ASBZCharacter::OnRep_ReplicatedIsProne() {
}

void ASBZCharacter::OnRep_ReplicatedIsHopping() {
}

void ASBZCharacter::OnRep_ReplicatedIsGrabbingLedge() {
}

void ASBZCharacter::OnRep_RemoteViewYaw(uint8 InOldRemoteViewYaw) {
}

void ASBZCharacter::OnRep_Inventory(TArray<ASBZWeapon*> InOldInventory) {
}

void ASBZCharacter::OnRep_CurrentWeapon(ASBZWeapon* InLastWeapon) {
}

void ASBZCharacter::OnRep_CharacterSchematic() {
}

void ASBZCharacter::OnGrappleStateChanged_Implementation(ESBZGrappleState NewState, const FSBZGrappleEventStateProperties& EventProperties) {
}

void ASBZCharacter::OnGrappleRequestDenied_Implementation(ESBZGrappleRequestFailedReason Reason, AActor* Attacker, AActor* Victim, const FSBZGrappleEventSettings& GrappleConfig, const FSBZGrappleAlignmentSettings& AlignmentSettings) {
}

void ASBZCharacter::OnAnimInstanceInitializedDelegate() {
}

void ASBZCharacter::NetMulticast_InterruptShoveRecovery_Implementation() {
}

void ASBZCharacter::Multicast_SetGadgetEnabled_Implementation(TSubclassOf<ASBZCharacterGadget> InGadgetClass, bool bInIsEnabled) {
}

void ASBZCharacter::Multicast_PredictedRagdollDenied_Implementation() {
}

void ASBZCharacter::Multicast_OnKill_Implementation(const FGameplayEffectContextHandle& ContextHandle, TSubclassOf<UGameplayEffect> GameplayEffectClass, float KillDamage) {
}

void ASBZCharacter::Multicast_ApplyShove_Implementation(AActor* InInstigator, const FSBZHurtReactionPrediction& InHurtReactionPrediction) {
}

void ASBZCharacter::Kill(const FGameplayEffectContextHandle& ContextHandle, TSubclassOf<UGameplayEffect> GameplayEffectClass, float KillDamage) {
}

bool ASBZCharacter::IsVaultingLoop() const {
    return false;
}

bool ASBZCharacter::IsVaultingExit() const {
    return false;
}

bool ASBZCharacter::IsVaultingEnter() const {
    return false;
}

bool ASBZCharacter::IsVaulting() const {
    return false;
}

bool ASBZCharacter::IsValidGrappleOpponent_Implementation(AActor* InOpponent) {
    return false;
}

bool ASBZCharacter::IsTargeting() const {
    return false;
}

bool ASBZCharacter::IsStuck() const {
    return false;
}

bool ASBZCharacter::IsRunning() const {
    return false;
}

bool ASBZCharacter::IsRecoveringFromShove() const {
    return false;
}

bool ASBZCharacter::IsPredictedAlive() const {
    return false;
}

bool ASBZCharacter::IsMantlingLoop() const {
    return false;
}

bool ASBZCharacter::IsMantlingExit() const {
    return false;
}

bool ASBZCharacter::IsMantlingEnter() const {
    return false;
}

bool ASBZCharacter::IsMantling() const {
    return false;
}

bool ASBZCharacter::IsGrappling(bool bIncludePending) const {
    return false;
}

bool ASBZCharacter::IsEquippedWeapon(const ASBZWeapon* TestWeapon) const {
    return false;
}

bool ASBZCharacter::IsEnteringExitingLadder() const {
    return false;
}

bool ASBZCharacter::IsDowned() const {
    return false;
}

bool ASBZCharacter::IsDefeated() const {
    return false;
}

bool ASBZCharacter::IsCrouching() const {
    return false;
}

bool ASBZCharacter::IsClimbing() const {
    return false;
}

bool ASBZCharacter::IsAlive() const {
    return false;
}

bool ASBZCharacter::HasValidVaultTrajectory() const {
    return false;
}

bool ASBZCharacter::HasValidMantleTrajectory() const {
    return false;
}

bool ASBZCharacter::HasHelmet() {
    return false;
}

TArray<ASBZWeapon*> ASBZCharacter::GetWeapons() const {
    return TArray<ASBZWeapon*>();
}

ASBZWeapon* ASBZCharacter::GetWeapon() const {
    return NULL;
}

FPawnStanceData ASBZCharacter::GetStanceData() {
    return FPawnStanceData{};
}

FGameplayEffectContextHandle ASBZCharacter::GetSelfInflictedEffectContextHandle() {
    return FGameplayEffectContextHandle{};
}

FName ASBZCharacter::GetRandomWeaponInDefaultWeaponSlot() {
    return NAME_None;
}

ESBZPeekingState ASBZCharacter::GetPeekState() const {
    return ESBZPeekingState::None;
}

FName ASBZCharacter::GetMissionInventoryName() {
    return NAME_None;
}

TArray<FString> ASBZCharacter::GetGrappleCharacterTags_Implementation(bool bForAnimation) {
    return TArray<FString>();
}

ASBZRangedWeapon* ASBZCharacter::GetEquippedRangedWeapon() const {
    return NULL;
}

ASBZMeleeWeapon* ASBZCharacter::GetEquippedMeleeWeapon() const {
    return NULL;
}

USBZClimbComponent* ASBZCharacter::GetClimbComponent() const {
    return NULL;
}

USBZCharacterSchematic* ASBZCharacter::GetCharacterSchematic() {
    return NULL;
}

bool ASBZCharacter::GetAlignmentPointTransform_Implementation(FTransform& Transform) {
    return false;
}

bool ASBZCharacter::EquipWeaponIndex(int32 InNewWeaponIndex) {
    return false;
}

void ASBZCharacter::Die() {
}

USBZWaypointComponent* ASBZCharacter::CreateWaypoint(TSubclassOf<USBZWaypointComponent> WaypointClass) {
    return NULL;
}

void ASBZCharacter::CharacterMakeNoise(APawn* NoiseInstigator, FVector NoiseLocation, float MaxRange, EAISoundType SoundType, FName Tag, UObject* UserData) {
}

bool ASBZCharacter::CanVaultMantle() const {
    return false;
}


void ASBZCharacter::ApplyShove(const FVector& Impulse, const float RecoveryDuration, AActor* ShoveInstigator) {
}

void ASBZCharacter::ApplyCharacterSkin(const USBZCharacterSkin* NewCharacterSkin) {
}

bool ASBZCharacter::AllowedToGrapple_Implementation(ESBZGrappleParticipantType ParticipantType) {
    return false;
}

void ASBZCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZCharacter, CurrentWeapon);
    DOREPLIFETIME(ASBZCharacter, bIsProne);
    DOREPLIFETIME(ASBZCharacter, bIsVaulted);
    DOREPLIFETIME(ASBZCharacter, bIsSliding);
    DOREPLIFETIME(ASBZCharacter, bIsHopping);
    DOREPLIFETIME(ASBZCharacter, bIsGrabbingLedge);
    DOREPLIFETIME(ASBZCharacter, CurrentPeekingState);
    DOREPLIFETIME(ASBZCharacter, bIsTargeting);
    DOREPLIFETIME(ASBZCharacter, CharacterSchematic);
    DOREPLIFETIME(ASBZCharacter, Inventory);
    DOREPLIFETIME(ASBZCharacter, TeamID);
    DOREPLIFETIME(ASBZCharacter, RemoteViewYaw);
}

ASBZCharacter::ASBZCharacter() {
    this->AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->GenericAnimations = NULL;
    this->bShouldTearOffNetworkOnDeath = true;
    this->MarkedVoiceComment = ESBZVoiceComment::None;
    this->DeathVoiceComment = ESBZVoiceComment::None;
    this->AggroWeight = 1;
    this->HeadBoneName = TEXT("Head");
    this->LandSoundEvent = NULL;
    this->DeathByHeadTraumaEvent = NULL;
    this->DodgeChancePerDifficulty[0] = 1;
    this->DodgeChancePerDifficulty[1] = 1;
    this->DodgeChancePerDifficulty[2] = 1;
    this->DodgeChancePerDifficulty[3] = 1;
    this->MediumHurtHealthScaleLimitPerDifficulty[0] = 1;
    this->MediumHurtHealthScaleLimitPerDifficulty[1] = 1;
    this->MediumHurtHealthScaleLimitPerDifficulty[2] = 1;
    this->MediumHurtHealthScaleLimitPerDifficulty[3] = 1;
    this->HeavyHurtHealthScaleLimitPerDifficulty[0] = 1;
    this->HeavyHurtHealthScaleLimitPerDifficulty[1] = 1;
    this->HeavyHurtHealthScaleLimitPerDifficulty[2] = 1;
    this->HeavyHurtHealthScaleLimitPerDifficulty[3] = 1;
    this->bUseBlueprintAttributeEvents = false;
    this->HealthAttributeSet = CreateDefaultSubobject<USBZHealthAttributeSet>(TEXT("SBZHealthAttributeSet"));
    this->LocomotionAttributeSet = CreateDefaultSubobject<USBZLocomotionAttributeSet>(TEXT("SBZLocomotionAttributeSet"));
    this->AIVisibilityNodeComputationFrequency = ESBZAIVisibilityNodeComputationFrequency::Once;
    this->CurrentWeapon = NULL;
    this->ShoveNoiseSchematic = NULL;
    this->ExplosionLineTraceBones.AddDefaulted(6);
    this->PlayerStandingHeight = 1;
    this->PlayerCrouchingHeight = 1;
    this->PlayerProneHeight = 1;
    this->PlayerSlideHeight = 1;
    this->PlayerJumpingHeight = 1;
    this->PlayerVaultHeight = 1;
    this->CrouchSpeedModifier = 1;
    this->ProneSpeedModifier = 1;
    this->SlideSpeedModifier = 1;
    this->FallDamageType = USBZDamageType::StaticClass();
    this->FallingStartHeight = 1;
    this->bIsProne = false;
    this->bIsVaulted = false;
    this->bIsSliding = false;
    this->bIsHopping = false;
    this->bIsGrabbingLedge = false;
    this->CurrentPeekingState = ESBZPeekingState::None;
    this->TargetingSpeedModifier = 1;
    this->DieReaction = NULL;
    this->HurtReaction = NULL;
    this->KnockbackReaction = NULL;
    this->DodgeReaction = NULL;
    this->LocalHitSound = NULL;
    this->LocalHitSoundHead = NULL;
    this->bIsFaceAnimated = true;
    this->LandedNoiseSchematic = NULL;
    this->bIsTargeting = false;
    this->bIsAlive = true;
    this->RagdollPhysicsAsset = NULL;
    this->GrappleState = ESBZGrappleState::None;
    this->DefaultGrappleKnifeClass = NULL;
    this->bSpawnGrappleKnifeOnBeginPlay = false;
    this->GrappleKnifeActor = NULL;
    this->TargetingMovementModifier = CreateDefaultSubobject<USBZCharacterMovementMultiplierModifier>(TEXT("TargetingMovementModifier"));
    this->CrouchMovementModifier = CreateDefaultSubobject<USBZCharacterMovementMultiplierModifier>(TEXT("CrouchMovementModifier"));
    this->ProneMovementModifier = CreateDefaultSubobject<USBZCharacterMovementMultiplierModifier>(TEXT("ProneMovementModifier"));
    this->SlideMovementModifier = CreateDefaultSubobject<USBZCharacterMovementMultiplierModifier>(TEXT("SlideMovementModifier"));
    this->ClimbComponent = NULL;
    this->TagTriggeredMontageMap3P = NULL;
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("OutlineComponent"));
    this->MantlingVaultingComponent = NULL;
    this->AlertLowOutlineSchematic = NULL;
    this->AlertMediumOutlineSchematic = NULL;
    this->AlertHighOutlineSchematic = NULL;
    this->VoiceComponent = CreateDefaultSubobject<USBZCharacterVoiceComponent>(TEXT("VoiceComponent"));
    this->FactionSafeZoneComponent = CreateDefaultSubobject<USBZAIFactionHideZoneComponent>(TEXT("FactionSafeZoneComponent"));
    this->RemoteViewYaw = 0;
    this->WaypointComponent = NULL;
    this->HelmetPartComponent = NULL;
}

