#include "OTWDMetaSchematic.h"

UOTWDMetaSchematic::UOTWDMetaSchematic() {
    this->FirstTurnMorale = 0;
    this->FirstTurnScrap = 0;
    this->FirstTurnProvision = 0;
    this->FirstTurnEquipment = 0;
    this->FirstTurnMedicine = 0;
    this->FirstTurnGold = 0;
    this->UpkeepEveryNTurns = 0;
    this->UpkeepCostProvisionPerSurvivor = 0;
    this->MaximumTotalMetagameResource = 1;
    this->PercentScrapLost = 1;
    this->PercentEquipmentLost = 1;
    this->PercentProvisionsLost = 1;
    this->PercentChanceOfLosingMedicine = 1;
    this->PercentMedicineLost = 1;
    this->PercentChanceOfLosingSVR = 1;
    this->PercentSVRLost = 1;
    this->MoraleLoss = 1;
    this->MinMoraleForWandererEnteringCamp = 1;
    this->MinHQLevelForRescuableWanderer = 0;
    this->MaximumSurvivorsDeath = 0;
    this->PercentSurvivorDeath = 1;
    this->MaximumSurvivorsInjury = 0;
    this->PercentSurvivorInjury = 1;
    this->BaseDailyChanceOnSuccess = 1;
    this->BaseDailyChanceOnFailure = 1;
    this->BaseDailyIncrementalOnNoInstance = 1;
    this->BaseDailyInstancedCap = 0;
    this->GrindChanceOnSuccess = 1;
    this->GrindChanceOnFailure = 1;
    this->GrindIncrementalOnNoInstance = 1;
    this->MaximumInstancedAmount = 0;
    this->MaximumCampDefenceInstancedAmount = 0;
    this->MinTurnsBetweenSurvivors = 0;
    this->MaxTurnsBetweenSurvivors = 0;
    this->MinTurnsBetweenInstancedMission = 0;
    this->MaxTurnsBetweenInstancedMission = 0;
    this->SurvivorRootData = NULL;
    this->BuildingsRootData = NULL;
    this->MissionsRootData = NULL;
}

