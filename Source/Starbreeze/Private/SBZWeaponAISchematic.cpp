#include "SBZWeaponAISchematic.h"

USBZWeaponAISchematic::USBZWeaponAISchematic() {
    this->PeekChance = 1;
    this->MaximumCoverPathLength = 1;
    this->ConsiderAbandoningCoverAfterEnemyNotSeenFor = 1;
    this->ConsiderAbandoningCoverAfterDamageTaken = 1;
    this->CoverStrategy = ESBZCoverPointSelectionStrategy::EUnassigned;
    this->MaxSecondsWaitForBurst = 1;
    this->bBaseAccuracyOnAimingOffset = false;
    this->CancelAimingTime = 1;
    this->AimingOffsetCrouchModifier = 1;
    this->AimingOffsetMoveModifier = 1;
    this->bNeverFireInHipFireScenarios = false;
    this->MaxWaitTimeForLOS = 1;
    this->FocusTimeModifier = 1;
    this->ForceOpenAreaCombatAfterLosingLOSForSeconds = 1;
    this->SwitchAttackPointAfterLosingLOSForSeconds = 1;
    this->ReloadChance = 1;
    this->BurstsBeforeReload = 0;
    this->BurstsBeforeMustReload = 0;
}

