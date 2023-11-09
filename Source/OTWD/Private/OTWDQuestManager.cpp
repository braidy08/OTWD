#include "OTWDQuestManager.h"

bool UOTWDQuestManager::UnlockQuest(const UOTWDQuestDataAsset* InQuestData) {
    return false;
}

void UOTWDQuestManager::RefreshActiveQuests() {
}

void UOTWDQuestManager::OnStateEntered(FName StateName) {
}

void UOTWDQuestManager::OnKilled(const FSBZOnKillData& Data) {
}

void UOTWDQuestManager::OnGlobalTechPurchased(const USBZTech* MetaTech) {
}

FOTWDQuestRewards UOTWDQuestManager::GetWeeklyQuestRewards() {
    return FOTWDQuestRewards{};
}

bool UOTWDQuestManager::CanQuestBeUnlocked(const UOTWDQuestDataAsset* InQuestData) {
    return false;
}

UOTWDQuestManager::UOTWDQuestManager() {
    this->BountySaveData = NULL;
    this->GameInstance = NULL;
}

