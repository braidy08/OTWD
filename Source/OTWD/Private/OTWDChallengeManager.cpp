#include "OTWDChallengeManager.h"

UOTWDChallengeManager::UOTWDChallengeManager() {
    this->Schematic = NULL;
    this->DefeatHandler = NULL;
}

void UOTWDChallengeManager::UpdateObjectiveChallenges(const FOTWDObjectiveEvent& ObjectiveEvent) {
}

void UOTWDChallengeManager::SetProgressStep(EChallengeName Name, uint8 StepIndex, bool bSaveImmediately, const USBZContentPack* ContentPack) {
}

void UOTWDChallengeManager::Progress(EChallengeName Name, int32 Collected, bool bSaveImmediately, const USBZContentPack* ContentPack) {
}

void UOTWDChallengeManager::OnAssignWeaponToPawnSlot(ESBZWeaponRarity Rarity) {
}


