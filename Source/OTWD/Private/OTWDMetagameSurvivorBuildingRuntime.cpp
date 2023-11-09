#include "OTWDMetagameSurvivorBuildingRuntime.h"

void UOTWDMetagameSurvivorBuildingRuntime::RemoveSurvivorFromBuilding(UOTWDMetagameSurvivor* SurvivorToRemove, bool& WasRemovalSuccess) {
}

int32 UOTWDMetagameSurvivorBuildingRuntime::GetUnlockedSurvivorSlots() {
    return 0;
}

int32 UOTWDMetagameSurvivorBuildingRuntime::GetNumSurvivorsInBuilding() {
    return 0;
}

int32 UOTWDMetagameSurvivorBuildingRuntime::GetMaxSurvivorSlots() {
    return 0;
}

int32 UOTWDMetagameSurvivorBuildingRuntime::GetBuildingLevel() {
    return 0;
}

float UOTWDMetagameSurvivorBuildingRuntime::GetBonusProgression() {
    return 0.0f;
}

int32 UOTWDMetagameSurvivorBuildingRuntime::GetBonusLevelUnlocked() {
    return 0;
}

void UOTWDMetagameSurvivorBuildingRuntime::ConfirmBuildingChanges() {
}

void UOTWDMetagameSurvivorBuildingRuntime::ClearBuildingOfAllSurvivors() {
}

void UOTWDMetagameSurvivorBuildingRuntime::CancelBuildingChanges() {
}

float UOTWDMetagameSurvivorBuildingRuntime::CalculateBonusProgressionChangeOnAssign(UOTWDMetagameSurvivor* SurvivorToAssign, int32& OutNewLevelIfAssigned) {
    return 0.0f;
}

void UOTWDMetagameSurvivorBuildingRuntime::AssignSurvivorToBuilding(UOTWDMetagameSurvivor* SurvivorToAssign, bool& WasAssignSuccess) {
}

UOTWDMetagameSurvivorBuildingRuntime::UOTWDMetagameSurvivorBuildingRuntime() {
    this->BuildingData = NULL;
}

