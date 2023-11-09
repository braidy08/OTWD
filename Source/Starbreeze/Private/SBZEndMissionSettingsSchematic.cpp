#include "SBZEndMissionSettingsSchematic.h"

USBZEndMissionSettingsSchematic::USBZEndMissionSettingsSchematic() {
    this->SuccessCountdownDuration = 1;
    this->NeutralCountdownDuration = 1;
    this->SuccessStateDuration = 1;
    this->FailureStateDuration = 1;
    this->NeutralStateDuration = 1;
    this->SuccessAudioEvent = NULL;
    this->FailureAudioEvent = NULL;
    this->NeutralAudioEvent = NULL;
    this->DefaultSuccessWidgetClass = NULL;
    this->DefaultFailureWidgetClass = NULL;
    this->DefaultNeutralWidgetClass = NULL;
}

