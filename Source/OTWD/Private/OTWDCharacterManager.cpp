#include "OTWDCharacterManager.h"

void UOTWDCharacterManager::RewardExperience(FGuid Character, int32 Experience, bool bIsBleedXp, bool bAwardBleedXp) {
}

int32 UOTWDCharacterManager::GetSkillsPoints(const TSoftClassPtr<APawn>& PawnClass) {
    return 0;
}

int32 UOTWDCharacterManager::CalcMissionCompletedExperienceRewardAtSpecificLevel(int32 LevelIdx, ESBZDifficulty Difficulty) {
    return 0;
}

int32 UOTWDCharacterManager::ApplyDifficultyExperienceModifier(int32 Experience, ESBZDifficulty Difficulty) {
    return 0;
}

void UOTWDCharacterManager::AddSkillPoints(const TSoftClassPtr<APawn>& PawnClass, int32 Amount) {
}

UOTWDCharacterManager::UOTWDCharacterManager() {
    this->GameInstance = NULL;
    this->Schematic = NULL;
    this->LevelData = NULL;
}

