#include "SBZAIConfig.h"

USBZAIConfig::USBZAIConfig() {
    this->Factions.AddDefaulted(7);
    this->Attitudes.AddDefaulted(42);
    this->AlertnessLevels.AddDefaulted(4);
    this->AlertnessInfluences.AddDefaulted(7);
    this->Stances.AddDefaulted(8);
    this->CoverAssumptionDot = 1;
    this->CoverSafetyDot = 1;
    this->bAllowedToThrowItems = true;
}

