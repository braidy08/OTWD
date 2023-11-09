#include "SBZGenericAnimationCollection.h"

USBZGenericAnimationCollection::USBZGenericAnimationCollection() {
    this->VaultMontage = NULL;
    this->MantleMontage = NULL;
    this->MantleEnter = NULL;
    this->MantleLoop = NULL;
    this->MantleExit = NULL;
    this->ClimbLoopAnimation = NULL;
    this->ClimbEnterFromBottomMontage = NULL;
    this->ClimbExitFromBottomMontage = NULL;
    this->ClimbEnterFromTopMontageL = NULL;
    this->ClimbEnterFromTopMontageR = NULL;
    this->ClimbExitFromTopMontageL = NULL;
    this->ClimbExitFromTopMontageR = NULL;
    this->ClimbEnterFromFallingMontageL = NULL;
    this->ClimbEnterFromFallingMontageR = NULL;
    this->DefeatBleedOutEnter = NULL;
    this->DefeatBleedOutToAlive = NULL;
    this->DefeatBleedOutToDead = NULL;
    this->DefeatBleedOutToDowned = NULL;
    this->DefeatStandingToDead = NULL;
    this->DefeatDead = NULL;
    this->DefeatDownedToAlive = NULL;
    this->DefeatDownedNoZombie = NULL;
    this->DefeatDownedWithZombie = NULL;
    this->DefeatDownedZombieToNo = NULL;
    this->DefeatDownedWithZombieToDead = NULL;
    this->DefeatDownedNoZombieToDead = NULL;
    this->FacialBleedOut = NULL;
    this->FacialBleedOutEnter = NULL;
    this->FacialIdle = NULL;
    this->FacialRun = NULL;
    this->FacialDeathLight = NULL;
    this->FacialDeathMedium = NULL;
    this->FacialDeathHeavy = NULL;
    this->FacialDeathHurt = NULL;
    this->FacialMelee = NULL;
}

