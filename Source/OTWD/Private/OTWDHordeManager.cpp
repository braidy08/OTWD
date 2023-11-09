#include "OTWDHordeManager.h"
#include "Net/UnrealNetwork.h"

void AOTWDHordeManager::StopHordeAutoBuildup() {
}

void AOTWDHordeManager::StartHordeAutoBuildup(float BuildAmount, float BuildInterval) {
}

void AOTWDHordeManager::SetHordeConfigurations(const FSBZHordeConfigurationCollection& Configurations) {
}

void AOTWDHordeManager::SetDialogsMuted(bool bIsMuted) {
}

void AOTWDHordeManager::ResetHordeConfigurations() {
}

void AOTWDHordeManager::OnRep_HordeFrozen() {
}

void AOTWDHordeManager::OnRep_BuildProgress() {
}

void AOTWDHordeManager::OnManagedPawnKilled(APawn* DeadPawn) {
}

void AOTWDHordeManager::Multicast_MakeNoise_Implementation(AOTWDMonsterCloset* Target, EHordeNoiseLoudness Loudness) {
}

bool AOTWDHordeManager::IsHordeBuildUpFrozen() const {
    return false;
}

bool AOTWDHordeManager::IsHordeAutoBuilding() const {
    return false;
}

bool AOTWDHordeManager::IsDialogsMuted() const {
    return false;
}

AOTWDHordeManager* AOTWDHordeManager::GetHordeManager(const UObject* WorldContextObject) {
    return NULL;
}

int32 AOTWDHordeManager::GetCurrentHordeLevel() const {
    return 0;
}

float AOTWDHordeManager::GetCurrentHordeBuildProgress() const {
    return 0.0f;
}

void AOTWDHordeManager::FreezeHordeBuildUpForSeconds(float FreezeSeconds) {
}

void AOTWDHordeManager::BuildHordeByMagnitude(float Magntiude, bool bIsIgnoringCooldown) {
}

void AOTWDHordeManager::AddPawnToHorde(APawn* Pawn) {
}

void AOTWDHordeManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOTWDHordeManager, CurrentHordeProgress);
    DOREPLIFETIME(AOTWDHordeManager, bIsHordeFrozen);
}

AOTWDHordeManager::AOTWDHordeManager() {
    this->bUseCurveBasedTargetPopulation = false;
    this->DefaultSpawnBehaviour = NULL;
    this->HordePopulationLimitingThreshold = 0;
    this->HordePopulationLimitingScale = 1;
    this->NumNavigationQueriesPerTick = 0;
    this->ActiveHordeConfiguration = NULL;
    this->CurrentHordeProgress = 1;
    this->CurrentPhasePopulationScale = 1;
    this->bIsHordeFrozen = false;
    this->CachedOTWDWorldSettings = NULL;
}

