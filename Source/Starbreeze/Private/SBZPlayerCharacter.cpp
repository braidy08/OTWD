#include "SBZPlayerCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZAimAssistComponent.h"
#include "SBZArmorAttributeSet.h"
#include "SBZAutoPeekComponent.h"
#include "SBZCarryingComponent.h"
#include "SBZCharacterMovementMultiplierModifier.h"
#include "SBZFirstPersonCameraAttachment.h"
#include "SBZInteractionAttributeSet.h"
#include "SBZNoiseAttributeSet.h"
#include "SBZPlayerActionHandler.h"
#include "SBZPlayerDefeatHandler.h"
#include "SBZPlayerDirectionalFeedbackComponent.h"
#include "SBZPlayerDownedAttributeSet.h"
#include "SBZPlayerGrappleHandler.h"
#include "SBZPlayerWeaponRestrictionComponent.h"
#include "SBZRecoilComponent.h"
#include "SBZStaminaAttributeSet.h"
#include "SBZStrengthAttributeSet.h"
#include "Templates/SubclassOf.h"

void ASBZPlayerCharacter::ToggleWeaponPart(ESBZRangedWeaponModuleType PartType) {
}

void ASBZPlayerCharacter::TargetInfoUpdated() {
}

void ASBZPlayerCharacter::StartThrowThrowableProjectile(TSubclassOf<ASBZThrowableProjectile> ThrowableProjectileClass, const FVector& StartLocation, float ThrowForce, const FRadialDamageParams& RadialDamage) {
}

void ASBZPlayerCharacter::StartThrowSimple() {
}

void ASBZPlayerCharacter::StartThrow(AActor* ActorToThrow, float ThrowForce, bool bAddCharacterVelocity) {
}

void ASBZPlayerCharacter::SetWeaponPartEnabled(ESBZRangedWeaponModuleType PartType, bool bEnabled) {
}

void ASBZPlayerCharacter::ServerSetWeaponPartEnabled_Implementation(ASBZRangedWeapon* Weapon, ESBZRangedWeaponModuleType PartType, bool bEnabled) {
}
bool ASBZPlayerCharacter::ServerSetWeaponPartEnabled_Validate(ASBZRangedWeapon* Weapon, ESBZRangedWeaponModuleType PartType, bool bEnabled) {
    return true;
}

void ASBZPlayerCharacter::ServerSetClimbSprinting_Implementation(bool bInIsRunning) {
}
bool ASBZPlayerCharacter::ServerSetClimbSprinting_Validate(bool bInIsRunning) {
    return true;
}

void ASBZPlayerCharacter::ServerSetAnimationJumping_Implementation(bool bInIsJumping) {
}
bool ASBZPlayerCharacter::ServerSetAnimationJumping_Validate(bool bInIsJumping) {
    return true;
}

void ASBZPlayerCharacter::Server_SpawnDone_Implementation() {
}
bool ASBZPlayerCharacter::Server_SpawnDone_Validate() {
    return true;
}

void ASBZPlayerCharacter::Server_SetThrowing_Implementation(bool bInIsThrowing, bool bInIsInterrupted) {
}
bool ASBZPlayerCharacter::Server_SetThrowing_Validate(bool bInIsThrowing, bool bInIsInterrupted) {
    return true;
}

void ASBZPlayerCharacter::Server_SetRunPressed_Implementation(bool bInIsRunPressed) {
}
bool ASBZPlayerCharacter::Server_SetRunPressed_Validate(bool bInIsRunPressed) {
    return true;
}

void ASBZPlayerCharacter::Server_SetRunActionEnabled_Implementation(bool bInIsRunActionEnabled) {
}
bool ASBZPlayerCharacter::Server_SetRunActionEnabled_Validate(bool bInIsRunActionEnabled) {
    return true;
}

void ASBZPlayerCharacter::Server_SetMeleeMovementModifierMultiplier_Implementation(float InMultiplier) {
}
bool ASBZPlayerCharacter::Server_SetMeleeMovementModifierMultiplier_Validate(float InMultiplier) {
    return true;
}

void ASBZPlayerCharacter::Server_SetIsForwardInput_Implementation(bool bInIsForwardInput) {
}
bool ASBZPlayerCharacter::Server_SetIsForwardInput_Validate(bool bInIsForwardInput) {
    return true;
}

void ASBZPlayerCharacter::Server_SetFlashlightEnabled_Implementation(bool bInIsFlashlightEnabled) {
}
bool ASBZPlayerCharacter::Server_SetFlashlightEnabled_Validate(bool bInIsFlashlightEnabled) {
    return true;
}

void ASBZPlayerCharacter::Server_OnDisableStrengthRegenChanged_Implementation(bool bInIsDisabled) {
}
bool ASBZPlayerCharacter::Server_OnDisableStrengthRegenChanged_Validate(bool bInIsDisabled) {
    return true;
}

void ASBZPlayerCharacter::RemoveThrowItem(bool bRemoveEffectsOnly, bool bDestroyThrowItem) {
}

void ASBZPlayerCharacter::RemoveCameraFeedback(int32 RemoveID) {
}

void ASBZPlayerCharacter::PlaySoundEffectByName(const FString& EventName) {
}

void ASBZPlayerCharacter::PlaySoundEffect(UAkAudioEvent* InAkEvent) {
}

void ASBZPlayerCharacter::PlayCinematicMontage_Implementation(UAnimMontage* InCharacterMontage1P, UAnimMontage* InCharacterMontage3P, UAnimMontage* InWeaponMontage1P, UAnimMontage* InWeaponMontage3P, TSubclassOf<ASkeletalMeshActor> InWeaponMeshActorClass1P, TSubclassOf<ASkeletalMeshActor> InWeaponMeshActorClass3P, FName InAttachSocket1P, FName InAttachSocket3P) {
}

void ASBZPlayerCharacter::PickupSupplies() {
}

void ASBZPlayerCharacter::OnRep_IsFlashlightEnabled() {
}

void ASBZPlayerCharacter::OnInteractionSuccess(USBZInteractableComponent* Interactable) {
}

void ASBZPlayerCharacter::OnDamage(const FDamageReceivedData& DamageData) {
}

void ASBZPlayerCharacter::OnCinematicMontageTimerDone(bool bInIsEquippedWeaponHidden) {
}

void ASBZPlayerCharacter::Multicast_SetThrowing_Implementation(bool bInIsThrowing, bool bInIsInterrupted) {
}

void ASBZPlayerCharacter::Multicast_RepVaultMontagePosition_Implementation(float InVaultMontagePosition) {
}

void ASBZPlayerCharacter::McastSetAnimationJumping_Implementation(bool bInIsJumping) {
}

void ASBZPlayerCharacter::K2_PlayCinematicMontage(UAnimMontage* InCharacterMontage1P, UAnimMontage* InCharacterMontage3P, UAnimMontage* InWeaponMontage1P, UAnimMontage* InWeaponMontage3P, TSubclassOf<ASkeletalMeshActor> InWeaponMeshActorClass1P, TSubclassOf<ASkeletalMeshActor> InWeaponMeshActorClass3P, FName InAttachSocket1P, FName InAttachSocket3P) {
}

bool ASBZPlayerCharacter::IsTargetedByAlertEnemies() const {
    return false;
}

bool ASBZPlayerCharacter::IsTargetedByAggroEnemies() const {
    return false;
}

bool ASBZPlayerCharacter::IsFirstPerson() const {
    return false;
}

void ASBZPlayerCharacter::HandleWeaponContinuousFireToggled(bool bIsNowContinuouslyFiring) {
}

void ASBZPlayerCharacter::HandlePickupStateChanged(ESBZPickedUpState NewState, ASBZPickupItem* PickupItem) {
}

float ASBZPlayerCharacter::GetWantedFOV() const {
    return 0.0f;
}

ASBZThrownItem* ASBZPlayerCharacter::GetThrowItem() {
    return NULL;
}

float ASBZPlayerCharacter::GetTargetingTransitionTime() const {
    return 0.0f;
}

void ASBZPlayerCharacter::GetTargetingProgress(float& OutProgress, bool& bOutWantsTargeting) {
}

float ASBZPlayerCharacter::GetTargetingOnTopFOV() const {
    return 0.0f;
}

float ASBZPlayerCharacter::GetTargetingFOV() const {
    return 0.0f;
}

float ASBZPlayerCharacter::GetNormalOnTopFOV() const {
    return 0.0f;
}

float ASBZPlayerCharacter::GetNormalFOV() const {
    return 0.0f;
}

USBZLadderCameraModifier* ASBZPlayerCharacter::GetLadderModifier() {
    return NULL;
}

USBZHeadbobCameraModifier* ASBZPlayerCharacter::GetHeadbobModifier() {
    return NULL;
}

float ASBZPlayerCharacter::GetFOVModifier(bool bWantsTargeting, bool bOnTop) const {
    return 0.0f;
}

float ASBZPlayerCharacter::GetCurrentShoveImmunity() const {
    return 0.0f;
}

float ASBZPlayerCharacter::GetControllerInputModifier() {
    return 0.0f;
}

FText ASBZPlayerCharacter::GetCharacterName() const {
    return FText::GetEmpty();
}

USBZFirstPersonCameraAttachment* ASBZPlayerCharacter::GetCameraAttachment() const {
    return NULL;
}

float ASBZPlayerCharacter::GetBaseFOV() const {
    return 0.0f;
}

USBZPlayerActionHandler* ASBZPlayerCharacter::GetActionHandler() const {
    return NULL;
}

void ASBZPlayerCharacter::FadeOutCameraFeedback(int32 RemoveID) {
}

void ASBZPlayerCharacter::ClientDetachFPCamera_Implementation(AController* InController) {
}

void ASBZPlayerCharacter::Client_StopNeedsToMove_Implementation() {
}

void ASBZPlayerCharacter::Client_StartNeedsToMove_Implementation(float TimeLeft) {
}

void ASBZPlayerCharacter::CheckNetRelevancy() {
}

FString ASBZPlayerCharacter::CharacterName() {
    return TEXT("");
}

void ASBZPlayerCharacter::ChangeWeaponToIndex(int32 InNewWeaponIndex) {
}





int32 ASBZPlayerCharacter::ApplyCameraFeedback(TSubclassOf<USBZLocalPlayerFeedback> FeedbackClass) {
    return 0;
}

void ASBZPlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlayerCharacter, bIsRunActionEnabled);
    DOREPLIFETIME(ASBZPlayerCharacter, bIsRunPressed);
    DOREPLIFETIME(ASBZPlayerCharacter, ThrowItem);
    DOREPLIFETIME(ASBZPlayerCharacter, bWantsToClimbSprint);
    DOREPLIFETIME(ASBZPlayerCharacter, bIsFlashlightEnabled);
    DOREPLIFETIME(ASBZPlayerCharacter, TargetedByAggroEnemies);
    DOREPLIFETIME(ASBZPlayerCharacter, TargetedByAlertEnemies);
    DOREPLIFETIME(ASBZPlayerCharacter, GrappleDamageAbilityHandle);
    DOREPLIFETIME(ASBZPlayerCharacter, GrappleStruggleShoveDamageAbilityHandle);
}

ASBZPlayerCharacter::ASBZPlayerCharacter() {
    this->ArmorAttributeSet = CreateDefaultSubobject<USBZArmorAttributeSet>(TEXT("SBZArmorAttributeSet"));
    this->StaminaAttributeSet = CreateDefaultSubobject<USBZStaminaAttributeSet>(TEXT("SBZStaminaAttributeSet"));
    this->StrengthAttributeSet = CreateDefaultSubobject<USBZStrengthAttributeSet>(TEXT("SBZStrengthAttributeSet"));
    this->InteractionAttributeSet = CreateDefaultSubobject<USBZInteractionAttributeSet>(TEXT("SBZInteractionAttributeSet"));
    this->NoiseAttributeSet = CreateDefaultSubobject<USBZNoiseAttributeSet>(TEXT("SBZNoiseAttributeSet"));
    this->PlayerDownedAttributeSet = CreateDefaultSubobject<USBZPlayerDownedAttributeSet>(TEXT("SBZPlayerDownedAttributeSet"));
    this->LowThreshholdDuration = 1;
    this->LowThreshholdPostProcess = 1;
    this->bUseLowStaminaPostProcessEffect = true;
    this->VaultMontagePosition = 1;
    this->RecoilComponent = CreateDefaultSubobject<USBZRecoilComponent>(TEXT("RecoilComponent"));
    this->PlayerWeaponRestrictionComponent = CreateDefaultSubobject<USBZPlayerWeaponRestrictionComponent>(TEXT("PlayerWeaponRestrictionComponent"));
    this->CarryingComponent = CreateDefaultSubobject<USBZCarryingComponent>(TEXT("CarryingComponent"));
    this->InitiallyEquippedWeaponSlot = ESBZWeaponSlotType::Primary;
    this->PlayerGrappleHandler = CreateDefaultSubobject<USBZPlayerGrappleHandler>(TEXT("PlayerGrappleHandler"));
    this->HUDWidget = NULL;
    this->DefeatCapsuleUpper = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DefeatCapsuleUpper"));
    this->DefeatCapsuleLower = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DefeatCapsuleLower"));
    this->PlayerActionHandler = CreateDefaultSubobject<USBZPlayerActionHandler>(TEXT("PlayerActionHandler"));
    this->DefeatHandler = CreateDefaultSubobject<USBZPlayerDefeatHandler>(TEXT("PlayerDefeatHandler"));
    this->CinematicMontageWeapon = NULL;
    this->Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PawnMesh1P"));
    this->LegMesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PawnLegMesh1P"));
    this->WeaponShadow1P = NULL;
    this->bIsRunActionEnabled = false;
    this->bIsRunPressed = false;
    this->FPCameraAttachment = CreateDefaultSubobject<USBZFirstPersonCameraAttachment>(TEXT("FirstPersonCameraAttachment"));
    this->FPCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("FirstPersonCameraSpringArm"));
    this->LadderModifier = NULL;
    this->HeadbobModifier = NULL;
    this->LeanModifier = NULL;
    this->LookAtModifier = NULL;
    this->PeekingModifier = NULL;
    this->HeightOverrideModifier = NULL;
    this->BaseAngleOverrideModifier = NULL;
    this->PositionOffsetModifier = NULL;
    this->AngleOverrideModifier = NULL;
    this->ClampCameraRotationModifier = NULL;
    this->AimAssistComponent = CreateDefaultSubobject<USBZAimAssistComponent>(TEXT("AimAssistComponent"));
    this->DirectionalFeedbackComponent = CreateDefaultSubobject<USBZPlayerDirectionalFeedbackComponent>(TEXT("DirectionalFeedbackComponent"));
    this->LootedCommentDuration = 1;
    this->LootedCommentNeededContainers = 0;
    this->MeleeKillsInARow = 0;
    this->CombatLineCommentMeleeKillsInARowNeeded = 0;
    this->HeadshotAchievementCommentDistance = 1;
    this->CameraStandingHeight = 1;
    this->CameraCrouchingHeight = 1;
    this->CameraProneHeight = 1;
    this->CameraSlideHeight = 1;
    this->CameraVaultHeight = 1;
    this->ShovedLookInputBlockDuration = 1;
    this->PeekingCameraOffset = 1;
    this->PeekingCameraRollAngle = 1;
    this->PeekingCameraTransitionTime = 1;
    this->MaxPeekingCameraOffsetLookingDown = 1;
    this->AutoPeekComponent = CreateDefaultSubobject<USBZAutoPeekComponent>(TEXT("AutoPeekComponent"));
    this->ThrowItem = NULL;
    this->SuppliesFoundCount = 0;
    this->TargetingTransitionTime = 1;
    this->OnTopBaseFOV = 1;
    this->NormalFOVMagnification = 1;
    this->TargetingFOVMagnification = 1;
    this->SFXSoundBank = NULL;
    this->ImpactArmorEvent = NULL;
    this->ArmorDepletedEvent = NULL;
    this->ArmorRegeneratedEvent = NULL;
    this->CrouchEvent = NULL;
    this->StandUpEvent = NULL;
    this->JumpSoundEvent = NULL;
    this->DeathCommentDistance = 1;
    this->OnBulletDamagePlayerFeedback = NULL;
    this->OnFirePlayerFeedback = NULL;
    this->OnHealthLowPlayerFeedback = NULL;
    this->OnStaminaLowPlayerFeedback = NULL;
    this->LandedForceFeedbackEffect = NULL;
    this->FirstPersonPhysMaterial = NULL;
    this->ThirdPersonPhysMaterial = NULL;
    this->FirstPersonGenericAnimations = NULL;
    this->WhizzbyActorClass = NULL;
    this->WhizzbyActor = NULL;
    this->bIsClimbSprinting = false;
    this->RunningSpeedModifier = 1;
    this->ClimbSprintSpeedModifier = 1;
    this->FastDyingModifier = 1;
    this->bShowMesh3PLowerBodyIn1P = false;
    this->bIsMesh3PRenderOnTopIn1P = false;
    this->Mesh3PHideBoneNameIn1P = TEXT("Spine2");
    this->Mesh3PScaleIn1P = 1;
    this->Mesh3PBackwardOffsetIn1P = 1;
    this->Mesh3PBackwardPitchIn1P = 1;
    this->MaxCameraOffsetForward = 1;
    this->MaxCameraOffsetBackward = 1;
    this->FadeOutCameraOffsetDuration = 1;
    this->MaxAimOffsetYawDegrees = 1;
    this->bUseMaxAimOffset = true;
    this->MaxStartAimOffsetYawDegrees = 1;
    this->MaximumTurnSpeed = 1;
    this->TurnInterpSpeed = 1;
    this->FoorTurnIKDisableSmoothSpeed = 1;
    this->MaxDiffWithMaxStartAimYawToStartTurn = 1;
    this->bWantsToClimbSprint = false;
    this->ShovedImmunityDuration = 1;
    this->bIsFirstPersonRenderOnTop = true;
    this->bDisableActionHandlerInput = false;
    this->PlayerItemEventTracker = NULL;
    this->FallingVelocityGrappleImmunity = 1;
    this->FallingDistanceFromFloorGrappleImmunity = 1;
    this->RunningMovementModifier = CreateDefaultSubobject<USBZCharacterMovementMultiplierModifier>(TEXT("RunningMovementModifier"));
    this->ClimbSprintMovementModifier = CreateDefaultSubobject<USBZCharacterMovementMultiplierModifier>(TEXT("ClimbSprintMovementModifier"));
    this->MeleeMovementModifier = CreateDefaultSubobject<USBZCharacterMovementMultiplierModifier>(TEXT("MeleeMovementModifier"));
    this->ItemMovementModifier = CreateDefaultSubobject<USBZCharacterMovementMultiplierModifier>(TEXT("ItemMovementModifier"));
    this->bIsFlashlightEnabled = false;
    this->TargetedByAggroEnemies = 0;
    this->TargetedByAlertEnemies = 0;
    this->FlashlightGadget = NULL;
}

