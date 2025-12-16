#include "SBZAIConfig.h"

USBZAIConfig::USBZAIConfig() {
    this->Factions.AddDefaulted(8);
    this->Attitudes.AddDefaulted(56);
    this->AlertnessLevels.AddDefaulted(4);
    this->AlertnessInfluences.AddDefaulted(7);
    this->Stances.AddDefaulted(8);
    this->CoverAssumptionDot = 1;
    this->CoverSafetyDot = 1;
    this->bAllowedToThrowItems = true;
    this->ChangeAggroTargetCooldown = 1;
    this->ChangeProximityTargetCooldown = 1;
    this->bWeaponAggroMethodAllowed = true;
}


