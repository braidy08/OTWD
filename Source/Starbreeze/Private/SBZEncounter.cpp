#include "SBZEncounter.h"

void ASBZEncounter::StartEncounter_Implementation() {
}

void ASBZEncounter::SetIntensity(float NewIntensity, bool Relative) {
}

void ASBZEncounter::SetAllowEncounterGroupSpawning(USBZEncounterGroupSchematic* EncounterGroup, bool bAllowSpawning) {
}

void ASBZEncounter::SetAllEncounterGroupsEnabled(bool bEnabled) {
}

void ASBZEncounter::SetAllConnectedSpawnPointsEnabled(bool bEnableSpawners) {
}

void ASBZEncounter::ResetSpawnerAdditionalWeight(ASBZSpawnerBase* TargetSpawner) {
}

void ASBZEncounter::RequestSpawnGroup() {
}

void ASBZEncounter::PauseEncounter() {
}


void ASBZEncounter::OnActorKilled(ASBZCharacter* KilledCharacter) {
}

void ASBZEncounter::OnActorDestroyed(AActor* Actor) {
}

int32 ASBZEncounter::GetRemainingPoolPopulation() const {
    return 0;
}

float ASBZEncounter::GetIntensity() const {
    return 0.0f;
}

int32 ASBZEncounter::GetCurrentWaveCount() const {
    return 0;
}

EEncounterState ASBZEncounter::GetCurrentState() {
    return EEncounterState::Stopped;
}

int32 ASBZEncounter::GetCurrentPoolPopulationLimit() const {
    return 0;
}

float ASBZEncounter::GetCurrentForcePopulationPercent() const {
    return 0.0f;
}

int32 ASBZEncounter::GetCurrentForcePopulationLimit() const {
    return 0;
}

int32 ASBZEncounter::GetCurrentForcePopulation() const {
    return 0;
}

TArray<APawn*> ASBZEncounter::GetAllEnemiesInEncounter() const {
    return TArray<APawn*>();
}

TArray<APawn*> ASBZEncounter::ForceSpawnGroup(ASBZSpawnerBase* TargetSpawner) {
    return TArray<APawn*>();
}

void ASBZEncounter::EndEncounter_Implementation() {
}

void ASBZEncounter::ClearAllEnemiesInEncounter() {
}

void ASBZEncounter::AdvancePhase() {
}

void ASBZEncounter::AddWeightToSpawner(ASBZSpawnerBase* TargetSpawner, float AdditionalWeight) {
}

ASBZEncounter::ASBZEncounter() {
    this->CharacterTable = NULL;
    this->LinkedCombatArea = NULL;
    this->SpawnBehaviour = NULL;
    this->bIgnorePopulationPool = false;
    this->CurrentWaveCount = 0;
}

