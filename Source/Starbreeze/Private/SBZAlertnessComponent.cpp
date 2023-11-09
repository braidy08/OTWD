#include "SBZAlertnessComponent.h"
#include "Net/UnrealNetwork.h"

void USBZAlertnessComponent::UpdateRecruitment_Implementation(bool bStateChanged, FSBZAlertnessLevelIdHelper CurrentState, float DeltaTime) {
}

void USBZAlertnessComponent::UpdatePerception_Implementation() {
}

void USBZAlertnessComponent::TriggerReaction(AActor* Influencer) {
}

void USBZAlertnessComponent::SetParentStateMachine(USBZAlertnessStateMachine* InStateMachine) {
}

void USBZAlertnessComponent::SetMinimumState(FSBZAlertnessLevelIdHelper InMinimumState) {
}

void USBZAlertnessComponent::SetInfluence(FSBZAlertnessInfluenceIdHelper Influence, FVector InfluenceLocation, ESBZSenseType SenseType, const AActor* InfluenceTarget) {
}

bool USBZAlertnessComponent::SetDamagedInfluence(FSBZAlertnessInfluenceIdHelper Influence, FVector InfluenceLocation, ESBZSenseType SenseType) {
    return false;
}

void USBZAlertnessComponent::ResetMinimumState() {
}

void USBZAlertnessComponent::ResetInfluence() {
}

void USBZAlertnessComponent::ResetAlertnessLevel() {
}

void USBZAlertnessComponent::Recruited_Implementation(USBZAlertnessComponent* Recruiter, float Alertness, bool bIsOngoingRecruitment) {
}

void USBZAlertnessComponent::Recruit(float Radius, float Alertness, int32 Num, bool bRequireLineOfSight, bool bIsOngoingRecruitment) {
}

void USBZAlertnessComponent::OnRep_AlertnessValue() {
}

void USBZAlertnessComponent::OnRep_AlertnessLevel() {
}

void USBZAlertnessComponent::OnOwnerDie() {
}

void USBZAlertnessComponent::OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCauser) {
}

USBZAlertnessStateMachine* USBZAlertnessComponent::GetStateMachine() const {
    return NULL;
}

float USBZAlertnessComponent::GetSecondsSinceLastInfluenceChange() const {
    return 0.0f;
}

USBZAlertnessStateMachine* USBZAlertnessComponent::GetParentStateMachine() const {
    return NULL;
}

FSBZAlertnessLevelIdHelper USBZAlertnessComponent::GetCurrentPreviousAlertLevel() const {
    return FSBZAlertnessLevelIdHelper{};
}

AActor* USBZAlertnessComponent::GetCurrentInfluenceTarget() const {
    return NULL;
}

ESBZSenseType USBZAlertnessComponent::GetCurrentInfluenceSenseType() const {
    return ESBZSenseType::SenseType_Sight;
}

FVector USBZAlertnessComponent::GetCurrentInfluenceLocation() const {
    return FVector{};
}

FSBZAlertnessInfluenceIdHelper USBZAlertnessComponent::GetCurrentInfluence() const {
    return FSBZAlertnessInfluenceIdHelper{};
}

float USBZAlertnessComponent::GetCurrentAlertness() const {
    return 0.0f;
}

FSBZAlertnessLevelIdHelper USBZAlertnessComponent::GetCurrentAlertLevel() const {
    return FSBZAlertnessLevelIdHelper{};
}

float USBZAlertnessComponent::GetAlertnessValue() const {
    return 0.0f;
}

FSBZAlertnessLevelIdHelper USBZAlertnessComponent::GetAlertLevel() const {
    return FSBZAlertnessLevelIdHelper{};
}

bool USBZAlertnessComponent::ForceAlertLevelWithInfluence(FSBZAlertnessLevelIdHelper TargetState, float Alertness, FSBZAlertnessInfluenceIdHelper Influence, FVector InfluenceLocation, ESBZSenseType SenseType, AActor* InfluenceTarget, bool bTriggerRecruitment) {
    return false;
}

bool USBZAlertnessComponent::ForceAlertLevel(FSBZAlertnessLevelIdHelper TargetState, float Alertness) {
    return false;
}

void USBZAlertnessComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZAlertnessComponent, PackedAlertnessValue);
    DOREPLIFETIME(USBZAlertnessComponent, AlertnessLevel);
    DOREPLIFETIME(USBZAlertnessComponent, LastValidInfluenceTarget);
}

USBZAlertnessComponent::USBZAlertnessComponent() {
    this->StateMachine = NULL;
    this->TrackUnseenTargetDistanceLimitMultiplier = 1;
    this->bForceInfluenceOnDamage = false;
    this->bForceStateOnDamage = false;
    this->ForceAlertnessOnDamage = 1;
    this->bTriggerRecruitmentOnDamageStateChange = false;
    this->SecondsSinceLastRecruitment = 4294967295;
    this->CanHandleTargetAlertOutline = false;
    this->LastValidInfluenceSenseType = ESBZSenseType::SenseType_Sight;
    this->RecruitmentBufferTime = 1;
    this->TrackUnseenTargetDistanceSq = 1;
    this->AIOwnerCharacter = NULL;
    this->OwnerController = NULL;
    this->HumanAIOwnerCharacter = NULL;
    this->AggroSystemComponent = NULL;
    this->PackedAlertnessValue = 0;
    this->LastValidInfluenceTarget = NULL;
}

