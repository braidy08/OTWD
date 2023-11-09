#include "SBZAlertnessStateMachine.h"

void USBZAlertnessStateMachine::TickStateMachine_Implementation(float DeltaTime) {
}

void USBZAlertnessStateMachine::SetParentStateMachine(USBZAlertnessStateMachine* StateMachine) {
}

void USBZAlertnessStateMachine::SetMinimumState(FSBZAlertnessLevelIdHelper InMinimumState) {
}

void USBZAlertnessStateMachine::SetLeader(AActor* InLeader) {
}

void USBZAlertnessStateMachine::SetInfluence(FSBZAlertnessInfluenceIdHelper Influence, FVector InfluenceLocation, ESBZSenseType SenseType, const AActor* InfluenceTarget) {
}

void USBZAlertnessStateMachine::ResetMinimumState() {
}

void USBZAlertnessStateMachine::ResetLeader() {
}

void USBZAlertnessStateMachine::ResetInfluence() {
}

void USBZAlertnessStateMachine::ResetAlertnessLevel() {
}

bool USBZAlertnessStateMachine::IsThisRecruitable(FSBZAlertnessLevelIdHelper LevelId) {
    return false;
}

bool USBZAlertnessStateMachine::IsThisCombatAble(FSBZAlertnessLevelIdHelper LevelId) const {
    return false;
}

void USBZAlertnessStateMachine::InitializeStateMachine_Implementation() {
}

float USBZAlertnessStateMachine::GetSecondsSinceLastInfluenceChange() const {
    return 0.0f;
}

FSBZAlertnessLevelIdHelper USBZAlertnessStateMachine::GetPreviousAlertLevel() const {
    return FSBZAlertnessLevelIdHelper{};
}

USBZAlertnessStateMachine* USBZAlertnessStateMachine::GetParentStateMachine() const {
    return NULL;
}

AActor* USBZAlertnessStateMachine::GetLeader() const {
    return NULL;
}

AActor* USBZAlertnessStateMachine::GetCurrentInfluenceTarget() const {
    return NULL;
}

ESBZSenseType USBZAlertnessStateMachine::GetCurrentInfluenceSenseType() const {
    return ESBZSenseType::SenseType_Sight;
}

FVector USBZAlertnessStateMachine::GetCurrentInfluenceLocation() const {
    return FVector{};
}

FSBZAlertnessInfluenceIdHelper USBZAlertnessStateMachine::GetCurrentInfluence() const {
    return FSBZAlertnessInfluenceIdHelper{};
}

float USBZAlertnessStateMachine::GetCurrentAlertness() const {
    return 0.0f;
}

FSBZAlertnessLevelIdHelper USBZAlertnessStateMachine::GetCurrentAlertLevel() const {
    return FSBZAlertnessLevelIdHelper{};
}

bool USBZAlertnessStateMachine::ForceAlertLevel(FSBZAlertnessLevelIdHelper TargetState, float Alertness) {
    return false;
}

bool USBZAlertnessStateMachine::CanRecruit() const {
    return false;
}

USBZAlertnessStateMachine::USBZAlertnessStateMachine() {
    this->CurrentInfluenceSenseType = ESBZSenseType::SenseType_Sight;
    this->CurrentAlertness = 1;
    this->SecondsSinceLastInfluenceChange = 1;
    this->ParentStateMachine = NULL;
    this->bRecruitmentEnabled = false;
    this->bInBrokenState = false;
}

