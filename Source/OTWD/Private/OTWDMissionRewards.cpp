#include "OTWDMissionRewards.h"

FOTWDPotentialMissionCompletionRewardData UOTWDMissionRewards::GetPotentialRewardsAt(ESBZDifficulty Difficulty) const {
    return FOTWDPotentialMissionCompletionRewardData{};
}

FOTWDMetagameCurrency UOTWDMissionRewards::GetMaximumCurrencyRewards() const {
    return FOTWDMetagameCurrency{};
}

UOTWDMissionRewards::UOTWDMissionRewards() {
    this->BonusObjectiveExperienceGain = 0;
    this->ExperienceModifier = 1;
}

