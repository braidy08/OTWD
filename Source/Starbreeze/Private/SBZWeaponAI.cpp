#include "SBZWeaponAI.h"
#include "Components/StaticMeshComponent.h"

ASBZWeaponAI::ASBZWeaponAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("WeaponBaseMesh"))) {
    this->bHidden = true;
    this->WeaponBaseStaticMesh = (UStaticMeshComponent*)WeaponBaseMesh;
    this->WeaponBaseSkeletalMesh = NULL;
    this->bIsAIWeapon = true;
    this->CoverStrategy = ESBZCoverPointSelectionStrategy::EUnassigned;
    this->MinDistanceToTarget = 1;
    this->MinDistanceToThreat = 1;
    this->RetreatDistance = 1;
    this->OptimalAttackDistance = 1;
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
    this->AggroTargetingPolicy = ESBZAggroTargetPolicy::None;
    this->bUseProximityZone = false;
    this->ProximityZoneRadius = 1;
    this->bUseProximityElevation = false;
    this->bProximityTargetRequireLOS = false;
    this->GeneralHumanAIAnimations = NULL;
    this->bWarningShotBehavior = true;
    this->AccuracyForMovingTargetMultiplier = 1;
    this->WeaponBaseStaticMesh->SetupAttachment(RootComponent);
    this->WeaponBaseMesh->SetupAttachment(RootComponent);
}

void ASBZWeaponAI::Multicast_SetIsShoving_Implementation(bool bValue) {
}


