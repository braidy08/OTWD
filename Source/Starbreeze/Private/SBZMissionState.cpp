#include "SBZMissionState.h"
#include "Net/UnrealNetwork.h"
#include "SBZImpactManager.h"

bool ASBZMissionState::ShouldEndMission() const {
    return false;
}

void ASBZMissionState::OnSessionIdReplicated() {
}

void ASBZMissionState::OnRep_ObjectiveManager() {
}

void ASBZMissionState::OnRep_MatchState() {
}

void ASBZMissionState::OnRep_InitialLevelScriptCheckpoint() {
}

void ASBZMissionState::OnRep_GrappleManager(ASBZGrappleManager* InPreviousValue) {
}

void ASBZMissionState::OnRep_EndMissionHandler() {
}

void ASBZMissionState::OnRep_AlignmentManager(ASBZAlignmentManager* InPreviousValue) {
}

void ASBZMissionState::OnPlayerStateChanged(ESBZPlayerDefeatState NewState, AActor* InOwner) {
}

void ASBZMissionState::Multicast_UpdateMigratableHostInfo_Implementation(const FHostMigrationInfo& InHostMigrationInfo) {
}

bool ASBZMissionState::MissionHasEnded() const {
    return false;
}




bool ASBZMissionState::IsLoneRespawnAllowed() const {
    return false;
}

bool ASBZMissionState::IsLoneRespawnActive() const {
    return false;
}

ASBZStaticMeshInstanceManager* ASBZMissionState::GetStaticMeshInstanceManager() const {
    return NULL;
}

ASBZSpawnManager* ASBZMissionState::GetSpawnManager() const {
    return NULL;
}

ASBZProjectileManager* ASBZMissionState::GetProjectileManager() const {
    return NULL;
}

ASBZObjectiveManager* ASBZMissionState::GetObjectiveManager() const {
    return NULL;
}

int32 ASBZMissionState::GetNumPlayers() const {
    return 0;
}

ASBZNavMeshEventManager* ASBZMissionState::GetNavMeshEventManager() const {
    return NULL;
}

int32 ASBZMissionState::GetMissionSeed() {
    return 0;
}

USBZInventoryComponent* ASBZMissionState::GetMissionInventoryByName(FName Name) {
    return NULL;
}

USBZInventoryComponent* ASBZMissionState::GetMissionInventoryByIndex(int32 Index) {
    return NULL;
}

float ASBZMissionState::GetLoneRespawnTimer() const {
    return 0.0f;
}

float ASBZMissionState::GetLoneRespawnDuration() const {
    return 0.0f;
}

ASBZKickingReplicatedProxy* ASBZMissionState::GetKickingProxy() const {
    return NULL;
}

USBZImpactManager* ASBZMissionState::GetImpactManager() const {
    return NULL;
}

ASBZGrappleManager* ASBZMissionState::GetGrappleManager() const {
    return NULL;
}

ASBZExplosionManager* ASBZMissionState::GetExplosionManager() const {
    return NULL;
}

ASBZEndMissionHandler* ASBZMissionState::GetEndMissionHandler() const {
    return NULL;
}

ASBZDialogManager* ASBZMissionState::GetDialogManager() const {
    return NULL;
}

FString ASBZMissionState::GetDebugMissionSeed() const {
    return TEXT("");
}

ASBZCombatManager* ASBZMissionState::GetCombatManager() const {
    return NULL;
}

ASBZChatReplicatedProxy* ASBZMissionState::GetChatProxy() const {
    return NULL;
}

ASBZBagManager* ASBZMissionState::GetBagManager() const {
    return NULL;
}

ASBZAssaultManager* ASBZMissionState::GetAssaultManager() const {
    return NULL;
}

ASBZAlignmentManager* ASBZMissionState::GetAlignmentManager() const {
    return NULL;
}

ASBZAISearch* ASBZMissionState::GetAISearchManager() const {
    return NULL;
}

bool ASBZMissionState::AreAllPlayersInState(ESBZPlayerDefeatState InState) const {
    return false;
}

void ASBZMissionState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZMissionState, ClientMissionSeed);
    DOREPLIFETIME(ASBZMissionState, MatchState);
    DOREPLIFETIME(ASBZMissionState, MissionID);
    DOREPLIFETIME(ASBZMissionState, Difficulty);
    DOREPLIFETIME(ASBZMissionState, HostFps);
    DOREPLIFETIME(ASBZMissionState, ReplicatedChatProxy);
    DOREPLIFETIME(ASBZMissionState, ReplicatedKickingProxy);
    DOREPLIFETIME(ASBZMissionState, InitialLevelScriptCheckpoint);
    DOREPLIFETIME(ASBZMissionState, SessionID);
    DOREPLIFETIME(ASBZMissionState, AlignmentManager);
    DOREPLIFETIME(ASBZMissionState, GrappleManager);
    DOREPLIFETIME(ASBZMissionState, StaticMeshInstanceManager);
    DOREPLIFETIME(ASBZMissionState, ObjectiveManager);
    DOREPLIFETIME(ASBZMissionState, EndMissionHandler);
    DOREPLIFETIME(ASBZMissionState, TotalPlayerDeaths);
    DOREPLIFETIME(ASBZMissionState, ExplosionManager);
    DOREPLIFETIME(ASBZMissionState, BagManager);
    DOREPLIFETIME(ASBZMissionState, DialogManager);
    DOREPLIFETIME(ASBZMissionState, ProjectileManager);
    DOREPLIFETIME(ASBZMissionState, SpawnManager);
}

ASBZMissionState::ASBZMissionState() {
    this->ClientMissionSeed = 0;
    this->LightScenario = ESBZLightScenario::Day;
    this->MatchState = TEXT("EnteringMap");
    this->PreviousMatchState = TEXT("EnteringMap");
    this->Difficulty = ESBZDifficulty::Normal;
    this->PlayerDefeatSettings = NULL;
    this->EndMissionSettings = NULL;
    this->HostFps = 0;
    this->ReplicatedChatProxy = NULL;
    this->ReplicatedKickingProxy = NULL;
    this->InitialLevelScriptCheckpoint = 0;
    this->bReceivedInitialBunch = false;
    this->GrappleManagerClass = NULL;
    this->ObjectiveManagerClass = NULL;
    this->ExplosionManagerClass = NULL;
    this->CombatManagerClass = NULL;
    this->AssaultManagerClass = NULL;
    this->DialogManagerClass = NULL;
    this->ProjectileManagerClass = NULL;
    this->SpawnManagerClass = NULL;
    this->ChatProxyClass = NULL;
    this->KickingProxyClass = NULL;
    this->AlignmentManager = NULL;
    this->GrappleManager = NULL;
    this->StaticMeshInstanceManager = NULL;
    this->ObjectiveManager = NULL;
    this->EndMissionHandler = NULL;
    this->TotalPlayerDeaths = 0;
    this->ExplosionManager = NULL;
    this->ImpactManager = CreateDefaultSubobject<USBZImpactManager>(TEXT("ImpactManager"));
    this->BagManager = NULL;
    this->CombatManager = NULL;
    this->AssaultManager = NULL;
    this->DialogManager = NULL;
    this->NavMeshEventManager = NULL;
    this->ProjectileManager = NULL;
    this->SpawnManager = NULL;
    this->AISearch = NULL;
}

