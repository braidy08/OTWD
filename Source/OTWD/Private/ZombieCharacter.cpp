#include "ZombieCharacter.h"
#include "SBZAIAimTargetComponent.h"
#include "SBZCharacterFootStepComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AZombieCharacter::TryExplodeZombie() {
}

void AZombieCharacter::SwitchToNormalCPP() {
}

void AZombieCharacter::SwitchToCrowdCPP() {
}

void AZombieCharacter::StartLunge_Implementation(const FSBZLungePrediction& InPrediction) {
}

void AZombieCharacter::SetTryingToGrapple(bool bNewState) {
}

void AZombieCharacter::SetIsCrawler() {
}

void AZombieCharacter::SetFinishCrawlerTransition() {
}

void AZombieCharacter::RefreshWounds() {
}

void AZombieCharacter::OnWounded_Implementation() {
}

void AZombieCharacter::OnRep_WoundSlots() {
}

void AZombieCharacter::OnRep_TryingToGrapple() {
}

void AZombieCharacter::OnRep_RandomStumbleAnim() {
}

void AZombieCharacter::OnRep_RandomSeed() {
}

void AZombieCharacter::OnRep_Crowd() {
}

void AZombieCharacter::OnRep_Crawler(bool bWasCrawler) {
}

void AZombieCharacter::OnCrowdGrappleAnimationEnded(ESBZGrappleState GrappleAnimationState) {
}

void AZombieCharacter::Multicast_InternalExplodeReaction_Implementation(const TArray<FSBZExplodePrediction>& InPredictionArray) {
}

void AZombieCharacter::Multicast_ExplodeReaction_Implementation(const FSBZHurtReactionPrediction& Prediction) {
}

void AZombieCharacter::Multicast_Explode_Implementation() {
}

bool AZombieCharacter::IsRoaming() const {
    return false;
}

FTransform AZombieCharacter::GetWoundTransform(const int32 WoundIndex) const {
    return FTransform{};
}

void AZombieCharacter::ForceToNormal() {
}

void AZombieCharacter::EndLunge() {
}

void AZombieCharacter::EnableRandomRoam(bool bEnable) {
}

void AZombieCharacter::ChangeWoundReferenceClass(const TSubclassOf<AOTWDWoundReferenceActor>& NewWoundReferenceClass) {
}

bool AZombieCharacter::CanExplodeZombie() {
    return false;
}

void AZombieCharacter::BP_Log(const FString& Message) {
}

bool AZombieCharacter::BeginExplodeAttack() {
    return false;
}

bool AZombieCharacter::ApplyWound_Implementation(int32 WoundIndex, const FVector& InImpulse) {
    return false;
}

void AZombieCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AZombieCharacter, WoundSlots);
    DOREPLIFETIME(AZombieCharacter, bIsLurker);
    DOREPLIFETIME(AZombieCharacter, bIsCrawler);
    DOREPLIFETIME(AZombieCharacter, bShouldStandUp);
    DOREPLIFETIME(AZombieCharacter, IsCrowdZombie);
    DOREPLIFETIME(AZombieCharacter, bIsStumbling);
    DOREPLIFETIME(AZombieCharacter, RandomSeed);
    DOREPLIFETIME(AZombieCharacter, RandomStumbleAnim);
    DOREPLIFETIME(AZombieCharacter, bIsTryingToGrapple);
    DOREPLIFETIME(AZombieCharacter, HashedAISchematic);
}

AZombieCharacter::AZombieCharacter() {
    this->WoundReferenceClass = NULL;
    this->WoundReferenceCDO = NULL;
    this->WoundIndex0 = 0;
    this->WoundIndex1 = 0;
    this->WoundIndex2 = 0;
    this->WoundIndex3 = 0;
    this->bIsLurker = false;
    this->bIsCrawler = false;
    this->bIsCapsuleCrawlerSet = false;
    this->bIsBloater = false;
    this->bShouldStandUp = false;
    this->bShouldWakeUp = false;
    this->IsCrowdZombie = false;
    this->bIsStumbling = false;
    this->bAllowedToStumble = true;
    this->bStartAsCrawler = false;
    this->CrawlerSchematic = NULL;
    this->AnimationCollection = NULL;
    this->RandomSeed = 0;
    this->CosmeticVariation = NULL;
    this->CrowdAnimationIndex = 0;
    this->CrowdGrapplAnimIntro = NULL;
    this->CrowdGrapplAnimStruggle = NULL;
    this->CrowdGrapplAnimEndWin = NULL;
    this->CrowdGrapplAnimEndLose = NULL;
    this->RandomStumbleAnim = 0;
    this->LastStumbleAnim = 0;
    this->EatingActor = NULL;
    this->ExplodeAttackTimeDelay = 1;
    this->ExplodeOriginBoneName = TEXT("Spine");
    this->ExplodeDamageMax = 1;
    this->ExplodeDamageMin = 1;
    this->ExplodeDamageDifficultyMultiplier[0] = 1;
    this->ExplodeDamageDifficultyMultiplier[1] = 1;
    this->ExplodeDamageDifficultyMultiplier[2] = 1;
    this->ExplodeDamageDifficultyMultiplier[3] = 1;
    this->ExplodeDamageFalloff = 1;
    this->ExplodeDamageType = NULL;
    this->ExplodeAudioEvent = NULL;
    this->ExplodeEmitterTemplate = NULL;
    this->ExplodeLocalPlayerFeedback = NULL;
    this->ExplodeLensRadius = 1;
    this->ExplodePostMesh = NULL;
    this->ExplodeResidualActor = NULL;
    this->ExplodeResidualActorLifeSpan = 1;
    this->ExplodeStunDuration = 1;
    this->ExplodeShoveImpulse = 1;
    this->ExplodeShoveRecoveryDuration = 1;
    this->MeshOffsetCrawler = 1;
    this->MaxLimbPhysicImpulse = 1;
    this->bIsLunging = false;
    this->CrawlerDieReaction = NULL;
    this->CrawlerHurtReaction = NULL;
    this->CrawlerKnockbackReaction = NULL;
    this->CrawlerFallingMontage = NULL;
    this->LightCrawlerLandingMontage = NULL;
    this->CrawlerLandingMontage = NULL;
    this->SBZCharacterFootStep = CreateDefaultSubobject<USBZCharacterFootStepComponent>(TEXT("SBZCharacterFootStep"));
    this->Target_Head = CreateDefaultSubobject<USBZAIAimTargetComponent>(TEXT("Target_Head"));
    this->ZombieSchematic = NULL;
    this->ChanceToNotKillZombiesOnFirstHitRoll = 1;
    this->bIsTryingToGrapple = false;
    this->CrawlerABP = NULL;
    this->bSaveDataIsAlive = false;
    this->HashedAISchematic = 0;
}

