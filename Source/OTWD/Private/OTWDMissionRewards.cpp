#include "OTWDMissionRewards.h"

UOTWDMissionRewards::UOTWDMissionRewards() {
    this->BonusObjectiveExperienceGain = 0;
    this->ExperienceModifier = 1;
}

FOTWDPotentialMissionCompletionRewardData UOTWDMissionRewards::GetPotentialRewardsAt(ESBZDifficulty Difficulty) const {
    return FOTWDPotentialMissionCompletionRewardData{};
}

FOTWDMetagameCurrency UOTWDMissionRewards::GetMaximumCurrencyRewards() const {
    return FOTWDMetagameCurrency{};
}


