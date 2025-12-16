#include "SBZSpawnerBase.h"
#include "Components/SceneComponent.h"

ASBZSpawnerBase::ASBZSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bCreatePredefinedPawnsOnBeginPlay = false;
    this->UsageState = ESBZSpawnerUsageState::Enabled;
    this->Seed = 0;
    this->bRandomizeSpawnTransformStartingIndex = false;
    this->PreviousSpawnTransformIndex = 0;
    this->ActivationType = ESpawnActivationType::S_None;
    this->bEnabledForEncounterFromBeginPlay = true;
    this->PreassignedHardPoint = NULL;
}

void ASBZSpawnerBase::StartSpawnCooldown() {
}

FSBZRequestGroupHandle ASBZSpawnerBase::SpawnQueued() {
    return FSBZRequestGroupHandle{};
}

void ASBZSpawnerBase::SpawnLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void ASBZSpawnerBase::Spawn_Implementation(TArray<APawn*>& OutPawns) {
}

void ASBZSpawnerBase::SetUsageState(ESBZSpawnerUsageState NewUsageState) {
}

void ASBZSpawnerBase::SetPreassignedHardPoint(ASBZHardPoint* InPreassignedHardPoint) {
}

void ASBZSpawnerBase::SetEnabledForEncounterSpawning(bool bEnableForEncounters) {
}

void ASBZSpawnerBase::SetAttachedSpawnerUsageStates(const AActor* Parent, ESBZSpawnerUsageState NewUsageState) {
}

void ASBZSpawnerBase::Reset() {
}

bool ASBZSpawnerBase::IsOnSpawnCooldown() const {
    return false;
}

ESBZSpawnerUsageState ASBZSpawnerBase::GetUsageState() const {
    return ESBZSpawnerUsageState::Enabled;
}

int32 ASBZSpawnerBase::GetSupportedSpawnTransformCount() const {
    return 0;
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


