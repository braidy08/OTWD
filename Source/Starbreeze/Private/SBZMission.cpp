#include "SBZMission.h"
#include "GameFramework/Character.h"
#include "SBZAIVisibilityManager.h"
#include "SBZGameSession.h"
#include "SBZMissionState.h"
#include "SBZPlayerController.h"
#include "SBZPlayerState.h"
#include "SBZProximitySensorNavLinkManager.h"
#include "SBZSpawnManager.h"
#include "SBZSpectatorPawn.h"

ASBZMission::ASBZMission(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameSessionClass = ASBZGameSession::StaticClass();
    this->GameStateClass = ASBZMissionState::StaticClass();
    this->PlayerControllerClass = ASBZPlayerController::StaticClass();
    this->PlayerStateClass = ASBZPlayerState::StaticClass();
    this->DefaultPawnClass = ACharacter::StaticClass();
    this->SpectatorClass = ASBZSpectatorPawn::StaticClass();
    this->ReplaySpectatorPlayerControllerClass = ASBZPlayerController::StaticClass();
    this->bUseSeamlessTravel = true;
    this->MatchState = TEXT("EnteringMap");
    this->bCanPlayerBeDamaged = true;
    this->SpawnManager = CreateDefaultSubobject<USBZSpawnManager>(TEXT("SpawnManager"));
    this->DangerMap = NULL;
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

void ASBZMission::StartMatch() {
}

void ASBZMission::SetDebugMissionSeedFromString(const FString& NewMissionSeed) {
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

bool ASBZMission::HasDebugMissionSeed() {
    return false;
}

void ASBZMission::HandleMatchHasStarted_Implementation() {
}

ASBZProximitySensorNavLinkManager* ASBZMission::GetProximitySensorNavLinkManager() const {
    return NULL;
}

int32 ASBZMission::GetDebugMissionSeed() {
    return 0;
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


