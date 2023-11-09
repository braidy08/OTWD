#include "SBZCombatManager.h"

float ASBZCombatManager::GetTimeAfterCombatStarted() const {
    return 0.0f;
}

int32 ASBZCombatManager::GetNumberOfHumanAIsRushers() const {
    return 0;
}

int32 ASBZCombatManager::GetNumberOfHumanAIsInCombat() const {
    return 0;
}

int32 ASBZCombatManager::GetNumberOfHumanAIsDefenders() const {
    return 0;
}

int32 ASBZCombatManager::GetNumberOfHumanAIsDefault() const {
    return 0;
}

int32 ASBZCombatManager::GetNumberOfHardPoints() const {
    return 0;
}

int32 ASBZCombatManager::GetNumberOfCombatAreas() const {
    return 0;
}

ASBZCombatManager::ASBZCombatManager() {
    this->FiringPermissionData = NULL;
    this->TimeForWarningShot = 1;
    this->FiringPermission = NULL;
}

