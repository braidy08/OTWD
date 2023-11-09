#include "SBZSpawnManager.h"

void ASBZSpawnManager::WaitForRequestGroup(const UObject* WorldContextObject, FSBZRequestGroupHandle Handle, const FLatentActionInfo& LatentInfo) {
}

TArray<APawn*> ASBZSpawnManager::K2_RequestPawnTypesImmediately(const TArray<FSBZPawnTypeRequest>& Requests, FSBZRequestGroupOptions Options, FName DebugName) {
    return TArray<APawn*>();
}

FSBZRequestGroupHandle ASBZSpawnManager::K2_RequestPawnTypes(const TArray<FSBZPawnTypeRequest>& Requests, FPawnDynamicDelegate PawnSpawned, FRequestDynamicDelegate RequestStopped, FSBZRequestGroupOptions Options, FName DebugName) {
    return FSBZRequestGroupHandle{};
}

ASBZSpawnManager* ASBZSpawnManager::GetSpawnManager(const UObject* WorldContextObject) {
    return NULL;
}

void ASBZSpawnManager::CancelRequestGroup(const FSBZRequestGroupHandle& Handle) {
}

ASBZSpawnManager::ASBZSpawnManager() {
    this->SpawnOffsetExtraHeight = 1;
}

