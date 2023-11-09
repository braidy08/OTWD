#include "SBZWeaponAI.h"

void ASBZWeaponAI::Multicast_SetIsShoving_Implementation(bool bValue) {
}

ASBZWeaponAI::ASBZWeaponAI() {
    this->PeekChance = 1;
    this->CoverStrategy = ESBZCoverPointSelectionStrategy::EUnassigned;
    this->MinDistanceToTarget = 1;
    this->MinDistanceToThreat = 1;
    this->MaxWaitTimeForLOS = 1;
    this->bAllowedToMoveAndShoot = true;
    this->bAllowedShootWithoutAiming = true;
    this->bStopAimingWhenDamageTaken = false;
    this->bInformPlayerWhenAiming = false;
    this->bRequireFireToken = true;
    this->FocusTimeModifier = 1;
    this->ShotsForMaxFocus = 0;
    this->bUseShotsForMaxFocus = true;
    this->bLosingLOSResetFocus = false;
    this->bApplyEmergencyRangeRule = true;
    this->AccuracySmoke = 1;
    this->AccuracySmokeName = TEXT("Smoke");
    this->SuppressiveRandom = 1;
    this->ReloadChance = 1;
    this->BurstsBeforeReload = 0;
    this->BurstsBeforeMustReload = 0;
    this->GeneralHumanAIAnimations = NULL;
    this->bWarningShotBehavior = true;
    this->AccuracyForMovingTargetMultiplier = 1;
}

