#include "SBZAISchematic.h"

USBZAISchematic::USBZAISchematic() {
    this->CrowdNavigationData = NULL;
    this->bForceStateOnDamage = false;
    this->ForceAlertnessOnDamage = 1;
    this->bTriggerRecruitmentOnDamageStateChange = false;
    this->bOverrideRecruitmentPolicies = false;
    this->SmashDamagePerSecond = 1;
    this->StanceData = NULL;
    this->ClimbSchematic = NULL;
    this->CombatRoleAggressiveness = ESBZAIRoleAggressiveness::ERoleAggressivenessVeryLow;
    this->bInfluenceDataRead = false;
    this->bStanceDataRead = false;
}

