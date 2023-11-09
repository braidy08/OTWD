#include "OTWDMetaSurvivorManager.h"

void UOTWDMetaSurvivorManager::SurvivorAbandonCamp(UOTWDMetagameSurvivor* Survivor, bool& bOutDidSurvivorAbandonCamp) {
}

void UOTWDMetaSurvivorManager::SortSurvivors(const ESurvivorOrder NewSurvivorOrder) {
}

void UOTWDMetaSurvivorManager::RemoveSurvivor(UOTWDMetagameSurvivor* Survivor, bool& bOutWasSurvivorRemoved) {
}

void UOTWDMetaSurvivorManager::RemoveAllDeadSurvivors() {
}

int32 UOTWDMetaSurvivorManager::ProvisionCostToBanishASurvivor(bool& bCanPlayerAffordBanishment) {
    return 0;
}

int32 UOTWDMetaSurvivorManager::GetSurvivorsCount(const ESurvivorOrder NewSurvivorOrder) {
    return 0;
}

TArray<UOTWDMetagameSurvivor*> UOTWDMetaSurvivorManager::GetSurvivors() {
    return TArray<UOTWDMetagameSurvivor*>();
}

TArray<UOTWDMetagameSurvivor*> UOTWDMetaSurvivorManager::GetPendingSurvivors() {
    return TArray<UOTWDMetagameSurvivor*>();
}

int32 UOTWDMetaSurvivorManager::GetMaxSurvivorsInCamp() {
    return 0;
}

uint8 UOTWDMetaSurvivorManager::GetAverageSurvivorLevel() {
    return 0;
}

TArray<UOTWDMetagameSurvivor*> UOTWDMetaSurvivorManager::GetAbandonedSurvivors() {
    return TArray<UOTWDMetagameSurvivor*>();
}

TArray<UOTWDMetagameSurvivor*> UOTWDMetaSurvivorManager::FilterSurvivors(const ESurvivorOrder NewSurvivorOrder) {
    return TArray<UOTWDMetagameSurvivor*>();
}

void UOTWDMetaSurvivorManager::ClearAbandonedSurvivorList() {
}

bool UOTWDMetaSurvivorManager::CanRemoveSurvivor(UOTWDMetagameSurvivor* Survivor) {
    return false;
}

void UOTWDMetaSurvivorManager::BanishSurvivor(UOTWDMetagameSurvivor* Survivor, const bool& bShouldSpendProvisions, bool& bOutWasBanishmentSuccessful) {
}

int32 UOTWDMetaSurvivorManager::AddPendingSurvivors(TArray<UOTWDMetagameSurvivor*> SelectedSurvivors) {
    return 0;
}

UOTWDMetaSurvivorManager::UOTWDMetaSurvivorManager() {
}

