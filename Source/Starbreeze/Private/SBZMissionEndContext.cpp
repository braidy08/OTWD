#include "SBZMissionEndContext.h"

FSBZMissionEndContext::FSBZMissionEndContext() {
    this->EndState = ESBZEndMissionState::VE_SUCCESS;
    this->MissionData = NULL;
    this->MissionDifficulty = ESBZDifficulty::Normal;
    this->CompletionPercentage = 1;
}

