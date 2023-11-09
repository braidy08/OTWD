#include "OTWDQuestRuntime.h"

bool UOTWDQuestRuntime::IsQuestChangedFlagSet() const {
    return false;
}

bool UOTWDQuestRuntime::IsOfQuestType(EOTWDQuestType InQuestType) {
    return false;
}

bool UOTWDQuestRuntime::IsObjectiveLevelRequirementMet() {
    return false;
}

bool UOTWDQuestRuntime::IsAwaitingTurnIn() {
    return false;
}

UOTWDQuestDataAsset* UOTWDQuestRuntime::GetQuestData() const {
    return NULL;
}

void UOTWDQuestRuntime::GetObjectiveRequirements(FOTWDQuestObjectiveRequirements& OutObjectiveRequirements) {
}

float UOTWDQuestRuntime::GetObjectivePercentageComplete() {
    return 0.0f;
}

TArray<FOTWDQuestObjectiveRuntime> UOTWDQuestRuntime::GetActiveObjectives() const {
    return TArray<FOTWDQuestObjectiveRuntime>();
}

void UOTWDQuestRuntime::ClearQuestChangedFlag() {
}

UOTWDQuestRuntime::UOTWDQuestRuntime() {
    this->QuestObjectiveIndex = 0;
    this->TurnsToComplete = 0;
    this->bQuestChangedFlag = false;
    this->bIsQuestComplete = false;
}

