#include "OTWDQuestStatics.h"

void UOTWDQuestStatics::UpdateBountyData(const UObject* WorldContextObject) {
}

bool UOTWDQuestStatics::UnlockQuest(const UObject* WorldContextObject, const UOTWDQuestDataAsset* QuestToUnlock) {
    return false;
}

bool UOTWDQuestStatics::UnlockBounty(const UObject* WorldContextObject, const UOTWDQuestDataAsset* BountyToUnlock) {
    return false;
}

void UOTWDQuestStatics::TurnInQuest(const UObject* WorldContextObject, const UOTWDQuestDataAsset* InQuestToTurnIn, bool& bWasQuestCompleted) {
}

bool UOTWDQuestStatics::TurnInBounties(const UObject* WorldContextObject) {
    return false;
}

bool UOTWDQuestStatics::IsQuestActive(const UObject* WorldContextObject, const UOTWDQuestDataAsset* InQuestData) {
    return false;
}

bool UOTWDQuestStatics::HasWeeklyRecievedServerValidation(const UObject* WorldContextObject) {
    return false;
}

bool UOTWDQuestStatics::HasQuestBeenCompleted(const UObject* WorldContextObject, const UOTWDQuestDataAsset* InQuestData) {
    return false;
}

EOTWDPlayFabQuestProgression UOTWDQuestStatics::GetWeeklyQuestState(const UObject* WorldContextObject) {
    return EOTWDPlayFabQuestProgression::Inactive;
}

void UOTWDQuestStatics::GetQuestsForLevel(const UObject* WorldContextObject, USBZLevelSchematic* InLevelSchematic, TArray<UOTWDQuestRuntime*>& OutActiveQuestRuntimes) {
}

void UOTWDQuestStatics::GetQuestRuntimes(const UObject* WorldContextObject, TArray<UOTWDQuestRuntime*>& OutActiveQuestRuntimes) {
}

UOTWDQuestDataAssetRoot* UOTWDQuestStatics::GetQuestRootData(const UObject* WorldContextObject) {
    return NULL;
}

UOTWDQuestManager* UOTWDQuestStatics::GetQuestManager(const UObject* WorldContextObject) {
    return NULL;
}

void UOTWDQuestStatics::GetBountyHeaderText(const UOTWDQuestDataAsset* InQuestData, FText& OutQuestObjectiveDescriptions) {
}

void UOTWDQuestStatics::GetAvailableDailyBounties(const UObject* WorldContextObject, const TArray<UOTWDQuestDataAsset*>& OutAvailableDailyBounties) {
}

void UOTWDQuestStatics::GetAllQuestsOfQuestType(const UObject* WorldContextObject, EOTWDQuestType QuestType, TArray<UOTWDQuestRuntime*>& OutActiveQuestRuntimes) {
}

UOTWDQuestRuntime* UOTWDQuestStatics::GetActiveQuestFromQuestData(const UObject* WorldContextObject, const UOTWDQuestDataAsset* InQuestData) {
    return NULL;
}

void UOTWDQuestStatics::CompleteQuestScriptObjectiveForQuest(const UObject* WorldContextObject, const UOTWDQuestDataAsset* InQuestData, const UOTWDQuestScriptObjectiveDataAsset* InObjectiveToComplete, int32 ObjectiveCountToIncrement) {
}

void UOTWDQuestStatics::CompleteQuestScriptObjective(const UObject* WorldContextObject, const UOTWDQuestScriptObjectiveDataAsset* InObjectiveToComplete, int32 ObjectiveCountToIncrement) {
}

void UOTWDQuestStatics::ClearQuestChangedFlag(const UObject* WorldContextObject, const UOTWDQuestDataAsset* InQuestData) {
}

bool UOTWDQuestStatics::CanTurnInBounties(const UObject* WorldContextObject) {
    return false;
}

bool UOTWDQuestStatics::AreAnyQuestsAwaitingTurnIn(const UObject* WorldContextObject) {
    return false;
}

bool UOTWDQuestStatics::AbandonActiveBounty(const UObject* WorldContextObject, UOTWDQuestRuntime* InQuestToAbandon) {
    return false;
}

UOTWDQuestStatics::UOTWDQuestStatics() {
}

