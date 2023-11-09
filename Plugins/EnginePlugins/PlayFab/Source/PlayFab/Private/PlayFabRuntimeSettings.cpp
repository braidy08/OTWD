#include "PlayFabRuntimeSettings.h"

UPlayFabRuntimeSettings::UPlayFabRuntimeSettings() {
    this->bUseDevelopmentEnvironment = false;
    this->DevelopmentEnvironmentURL = TEXT(".playfabsandbox.com");
    this->ProductionEnvironmentURL = TEXT(".playfabapi.com");
    this->TitleId = TEXT("942B");
}

