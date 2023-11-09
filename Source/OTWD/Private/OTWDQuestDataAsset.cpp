#include "OTWDQuestDataAsset.h"

UOTWDQuestDataAsset::UOTWDQuestDataAsset() {
    this->QuestIcon = NULL;
    this->CompletedQuestIcon = NULL;
    this->QuestType = EOTWDQuestType::Primary;
    this->QuestRecommendedPowerLevel = 0;
    this->TurnsActive = 0;
    this->QuestSeason = 0;
    this->QuestEpisodeNumber = 0;
    this->bIsQuestHidden = false;
}

