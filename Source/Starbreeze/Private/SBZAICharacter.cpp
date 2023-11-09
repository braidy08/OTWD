#include "SBZAICharacter.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIIgnoreFactionComponent.h"
#include "SBZAIShoveAttributeSet.h"
#include "SBZActHandlerComponent.h"
#include "SBZMoveToInteractionHandlerComponent.h"

void ASBZAICharacter::SetPinningTarget(AActor* InPinnedActor) {
}

void ASBZAICharacter::SeekOutPlayer(FSBZAlertnessLevelIdHelper AlertLevelToSet, float Alertness, FName BlackboardInfluenceTargetName, FName BlackboardInfluenceLocationName) {
}

void ASBZAICharacter::OnStanceChanged(FSBZAIStanceIdHelper NewStance, FSBZAIStanceIdHelper OldStance) {
}

void ASBZAICharacter::OnRep_SyncLandResultData(FSBZSyncLandResultData OldSyncLandResultData) {
}

void ASBZAICharacter::OnRep_PinnedActor() {
}

void ASBZAICharacter::OnRep_CurrentStance() {
}

void ASBZAICharacter::OnRep_ActData() {
}

void ASBZAICharacter::OnLandingMontageEnded3P(UAnimMontage* InMontage, bool bInInterrupted) {
}

void ASBZAICharacter::OnAlertnessChanged(USBZAlertnessComponent* Sender, FSBZAlertnessLevelIdHelper NewLevel, FSBZAlertnessLevelIdHelper OldLevel) {
}

void ASBZAICharacter::OnAIEnabledChanged(bool bInIsAIEnabled) {
}

void ASBZAICharacter::NetMulticast_ApplyPinnerShove_Implementation(AActor* DamageCauser, const FSBZHurtReactionPrediction& ShoveReaction) {
}

void ASBZAICharacter::NetMulticast_AbortAct_Implementation() {
}

void ASBZAICharacter::Multicast_AnimationTurnCancel_Implementation(const FSBZTurnAnimationCancelParameters& CancelParameters) {
}

void ASBZAICharacter::Multicast_AnimationTurn_Implementation(const FSBZTurnAnimationParameters& TurnParameters) {
}

float ASBZAICharacter::LimitToCharacterTurnSpeed(float DeltaTime, float DesiredRotation) const {
    return 0.0f;
}

bool ASBZAICharacter::IsUsingAct() const {
    return false;
}

bool ASBZAICharacter::IsRoaming() const {
    return false;
}

void ASBZAICharacter::InteractWithDoor_Implementation() {
}

USBZAIDoorInteractionComponent* ASBZAICharacter::GetDoorInteractionComponent() const {
    return NULL;
}

USBZAlertnessComponent* ASBZAICharacter::GetAlertnessComponent() const {
    return NULL;
}

USBZAIAggroSystemComponent* ASBZAICharacter::GetAggroComponent() const {
    return NULL;
}

bool ASBZAICharacter::ForceMove(FSBZAIStanceIdHelper Stance, FVector Location) {
    return false;
}

void ASBZAICharacter::EquipWeapon_Implementation() {
}

void ASBZAICharacter::EnablePatrol(bool bEnable) {
}

void ASBZAICharacter::CleanupOnDeath() {
}

void ASBZAICharacter::CheckNetRelevancy() {
}

void ASBZAICharacter::AbortPOI() {
}

void ASBZAICharacter::AbortAct() {
}

void ASBZAICharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAICharacter, CurrentAlertness);
    DOREPLIFETIME(ASBZAICharacter, CurrentStance);
    DOREPLIFETIME(ASBZAICharacter, PinnedActor);
    DOREPLIFETIME(ASBZAICharacter, bIsAIEnabled);
    DOREPLIFETIME(ASBZAICharacter, SyncLandResultData);
    DOREPLIFETIME(ASBZAICharacter, ActData);
}

ASBZAICharacter::ASBZAICharacter() {
    this->AICharacterSchematic = NULL;
    this->AISchematicStart = NULL;
    this->AISchematic = NULL;
    this->YawValueWhenToAnimTurnStarted = 1;
    this->DeathPOI = NULL;
    this->DeathNoiseData = NULL;
    this->TakedownDeathNoiseData = NULL;
    this->bCanSearch = true;
    this->BulletMagnetismSocketName = TEXT("MagnetismSocket");
    this->AdditionnalBulletDeviationDistance = 1;
    this->bPinnerGetShovedOnDamage = false;
    this->PinnerShovedDamageRequired = 1;
    this->PinnerShovedImpulse = 1;
    this->PinnerShovedRecoveryTime = 1;
    this->BigAimYawAccumulator = 1;
    this->BigAimYawAngleThreshold = 1;
    this->ReloadAbsAimYawAngleThreshold = 1;
    this->CurrentStance = 255;
    this->TakedownInteractable = NULL;
    this->DoorInteractionComponent = NULL;
    this->MoveToInteractionHandler = CreateDefaultSubobject<USBZMoveToInteractionHandlerComponent>(TEXT("MoveToInteractionHandler"));
    this->MinimumAbsRotationByAnim = 1;
    this->HeadingDeadZoneHalfAngleIdle = 1;
    this->HeadingDeadZoneHalfAngleMove = 1;
    this->MaxDelayBeforeTurnOnSpotInSeconds = 1;
    this->MaxDelayBeforeReducingBigAimYaw = 1;
    this->PinnedActor = NULL;
    this->bDiesFromLandedOn = true;
    this->bIsAIEnabled = true;
    this->StatusEffectTypeMaskAllowed = 235;
    this->MediumChanceIncreaseOnHeadshot = 1;
    this->HeavyChanceIncreaseOnHeadshot = 1;
    this->DeadMediumChanceIncreaseOnHeadshot = 1;
    this->DeadHeavyChanceIncreaseOnHeadshot = 1;
    this->TankComponent = NULL;
    this->FallingMontage = NULL;
    this->FallingEquippedMontage = NULL;
    this->LightLandingMontage = NULL;
    this->LandingMontage = NULL;
    this->LightLandingEquippedMontage = NULL;
    this->HeavyLandingEquippedMontage = NULL;
    this->LightLandingHeight = 1;
    this->MinLandingHeight = 1;
    this->LastFallingMontage = NULL;
    this->bHasIgnoreFactionCollisionRestriction = false;
    this->IgnoreFactionCollisionMask = 0;
    this->AlertnessComponent = NULL;
    this->AggroComponent = NULL;
    this->ActHandlerComponent = CreateDefaultSubobject<USBZActHandlerComponent>(TEXT("ActHandlerComponent"));
    this->IgnoreFactionComponent = CreateDefaultSubobject<USBZAIIgnoreFactionComponent>(TEXT("FactionIgnoreComponent"));
    this->RangedAttackComponent = NULL;
    this->ThrowAttackComponent = NULL;
    this->DamageMemoryComponent = NULL;
    this->DeathPOISpawn = NULL;
    this->ShoveHandler = NULL;
    this->ShoveAttributeSet = CreateDefaultSubobject<USBZAIShoveAttributeSet>(TEXT("ShoveAttributeSet"));
    this->StreakComment = ESBZVoiceComment::None;
    this->bUseBrainTickLOD = false;
    this->bAllowMassDestroy = true;
    this->AIHumanTankcomponent = NULL;
    this->CachedSBZAICharAnim = NULL;
    this->LastLandingMontage = NULL;
}

