#include "SBZSpawnerBase.h"

void ASBZSpawnerBase::StartSpawnCooldown() {
}

FSBZRequestGroupHandle ASBZSpawnerBase::SpawnQueued() {
    return FSBZRequestGroupHandle{};
}

void ASBZSpawnerBase::SpawnLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void ASBZSpawnerBase::Spawn_Implementation(TArray<APawn*>& OutPawns) {
}

void ASBZSpawnerBase::SetPreassignedHardPoint(ASBZHardPoint* InPreassignedHardPoint) {
}

void ASBZSpawnerBase::SetEnabledForEncounterSpawning(bool bEnableForEncounters) {
}

void ASBZSpawnerBase::Reset() {
}

bool ASBZSpawnerBase::IsOnSpawnCooldown() const {
    return false;
}

void ASBZSpawnerBase::GetSpawnedPawnsCount(bool bAliveOnly, int32& OutCount) {
}

USBZBaseSpawnBehaviour* ASBZSpawnerBase::GetDefaultSpawnBehavior() const {
    return NULL;
}

void ASBZSpawnerBase::GetAllSpawnedPawns(TArray<APawn*>& OutPawns) {
}

bool ASBZSpawnerBase::CanBeUsedForEncounterSpawning() const {
    return false;
}

ASBZSpawnerBase::ASBZSpawnerBase() {
    this->bEnabledForEncounterFromBeginPlay = true;
    this->PreassignedHardPoint = NULL;
    this->SpawnActorCollisionHandling = ESpawnActorCollisionHandlingMethod::Undefined;
}

