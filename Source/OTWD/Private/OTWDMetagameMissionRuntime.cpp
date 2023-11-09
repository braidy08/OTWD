#include "OTWDMetagameMissionRuntime.h"

void UOTWDMetagameMissionRuntime::StartMission(const TArray<UOTWDMetagameSurvivor*>& SurvivorList, UOTWDMetagameSurvivorCampMoraleLevelData* CampMoraleLevelOnMissionStart) {
}

void UOTWDMetagameMissionRuntime::SetIsNew(bool bNew) {
}

int32 UOTWDMetagameMissionRuntime::GetMissionXP(TArray<UOTWDMetagameSurvivor*> SurvivorsAssigned) {
    return 0;
}

FOTWDMetagameSurvivorMission UOTWDMetagameMissionRuntime::GetMissionData() {
    return FOTWDMetagameSurvivorMission{};
}

FOTWDMetagameCurrency UOTWDMetagameMissionRuntime::GetMissionCurrencyRewards(TArray<UOTWDMetagameSurvivor*> SurvivorsAssigned) {
    return FOTWDMetagameCurrency{};
}

float UOTWDMetagameMissionRuntime::GetCompletionPercent() {
    return 0.0f;
}

int32 UOTWDMetagameMissionRuntime::GetActualTurnsToCompletion() {
    return 0;
}

UOTWDMetagameMissionRuntime::UOTWDMetagameMissionRuntime() {
    this->TurnsActive = 0;
    this->SuccessChance = 1;
    this->bIsMissionComplete = false;
    this->bWasMissionASuccess = false;
    this->bDidSurvivorsDieOnMission = false;
    this->bIsOldestMission = false;
    this->bIsNew = false;
}

