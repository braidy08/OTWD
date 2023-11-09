#include "SBZMission.h"
#include "SBZAIVisibilityManager.h"
#include "SBZProximitySensorNavLinkManager.h"

void ASBZMission::StartMatch() {
}

void ASBZMission::SetCurrentCheckpoints(const TArray<ASBZCheckpoint*>& NewCheckpoints) {
}

void ASBZMission::RestartGame() {
}

void ASBZMission::Restart() {
}

bool ASBZMission::ReadyToStartMatch_Implementation() {
    return false;
}

bool ASBZMission::IsMatchInProgress() const {
    return false;
}

ASBZProximitySensorNavLinkManager* ASBZMission::GetProximitySensorNavLinkManager() const {
    return NULL;
}

USBZLootTablesSchematic* ASBZMission::GetLootTablesSchematic() {
    return NULL;
}

USBZLootTableSchematic* ASBZMission::GetCurrentLootTableSchematic() {
    return NULL;
}

USBZCoverPointManager* ASBZMission::GetCoverPointManager() const {
    return NULL;
}

ASBZAIVisibilityManager* ASBZMission::GetAIVisibilityManager() const {
    return NULL;
}

USBZAIRoamingVolumeManager* ASBZMission::GetAIRoamingVolumeManager() const {
    return NULL;
}

ASBZAIManager* ASBZMission::GetAIManager() const {
    return NULL;
}

ASBZMission::ASBZMission() {
    this->MatchState = TEXT("EnteringMap");
    this->bCanPlayerBeDamaged = true;
    //this->DangerMap = NULL;
    this->AIManager = NULL;
    this->bAllowSpawningOnPlayer = true;
    this->PlayerSpawnGroup = NULL;
    this->PlayerAttackTracker = NULL;
    this->AuthorityMissionSeed = 0;
    this->bShouldEverRestartPlayers = true;
    this->bAllowPerPlayerPawnClasses = true;
    this->PoseTracker = NULL;
    this->AIVisibilityManagerClass = ASBZAIVisibilityManager::StaticClass();
    this->AIVisibilityManager = NULL;
    this->ProximitySensorNavLinkManagerClass = ASBZProximitySensorNavLinkManager::StaticClass();
    this->ProximitySensorNavLinkManager = NULL;
    this->CoverPointManagerClass = NULL;
    this->CoverPointManager = NULL;
    this->AIRoamingVolumeManagerClass = NULL;
    this->AIRoamingVolumeManager = NULL;
}

