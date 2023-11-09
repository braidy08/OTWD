#include "OTWDQuestObjectiveBaseDataAsset.h"

UOTWDQuestObjectiveBaseDataAsset::UOTWDQuestObjectiveBaseDataAsset() {
    this->ObjectiveCompletionCount = 0;
    this->CountToNotifyUIOnObjectiveUpdate = 0;
    this->ObjectiveType = EOTWDQuestObjectiveType::None;
}

