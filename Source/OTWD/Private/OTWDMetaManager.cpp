#include "OTWDMetaManager.h"

void UOTWDMetaManager::UpdateOldestMission() {
}

void UOTWDMetaManager::StartMission(UOTWDMetagameMissionRuntime* MissionData, const TArray<UOTWDMetagameSurvivor*>& SurvivorList, bool& bStartMissionWasASuccess) {
}

bool UOTWDMetaManager::ShouldWandererSpawnInMission() {
    return false;
}

void UOTWDMetaManager::SaveMetagame() {
}

void UOTWDMetaManager::RemoveOldestMission() {
}

void UOTWDMetaManager::OnPlayFabStart() {
}

void UOTWDMetaManager::OnCampDefenceEnd(bool bSuccess, int32 Difficulty) {
}

bool UOTWDMetaManager::IsTimeLimitedVendorItemsCollectable() {
    return false;
}

bool UOTWDMetaManager::IsTimeLimitedVendorActive() {
    return false;
}

bool UOTWDMetaManager::HaveEnoughResources(const FOTWDMetagameCurrency& InResources) const {
    return false;
}

USBZLevelSchematic* UOTWDMetaManager::GetWandererRescuableMission() const {
    return NULL;
}

TSoftObjectPtr<USBZAISchematic> UOTWDMetaManager::GetWandererAISchematic() const {
    return NULL;
}

int32 UOTWDMetaManager::GetUpKeepMaxTurns() {
    return 0;
}

FOTWDMetagameCurrency UOTWDMetaManager::GetUpkeepCost() {
    return FOTWDMetagameCurrency{};
}

int32 UOTWDMetaManager::GetTurnsToNextUpkeepPay() {
    return 0;
}

int32 UOTWDMetaManager::GetTurnIndex() {
    return 0;
}

UOTWDMetaSurvivorManager* UOTWDMetaManager::GetSurvivorManager() {
    return NULL;
}

FOTWDMetagameCurrency UOTWDMetaManager::GetResources() {
    return FOTWDMetagameCurrency{};
}

int32 UOTWDMetaManager::GetMissionCompleteXp(UOTWDMetagameMissionRuntime* MissionData, const bool& bWasMissionASuccess) {
    return 0;
}

int32 UOTWDMetaManager::GetMaxSurvivorSlots() {
    return 0;
}

FOTWDMissionEndReport UOTWDMetaManager::GetLastMissionReport() {
    return FOTWDMissionEndReport{};
}

int32 UOTWDMetaManager::GetHQLevel() {
    return 0;
}

UOTWDMetagameSurvivorCampMoraleLevelData* UOTWDMetaManager::GetCurrentCampMoraleLevelData() {
    return NULL;
}

int32 UOTWDMetaManager::GetCurrentCampMoraleLevel() {
    return 0;
}

int32 UOTWDMetaManager::GetCompletedMissionsCount() {
    return 0;
}

TArray<UOTWDMetagameMissionRuntime*> UOTWDMetaManager::GetCompletedMissions() {
    return TArray<UOTWDMetagameMissionRuntime*>();
}

TArray<UOTWDMetagameSurvivorBuildingRuntime*> UOTWDMetaManager::GetBuildings() {
    return TArray<UOTWDMetagameSurvivorBuildingRuntime*>();
}

int32 UOTWDMetaManager::GetAvailableMissionsCount() {
    return 0;
}

TArray<UOTWDMetagameMissionRuntime*> UOTWDMetaManager::GetAvailableMissions() {
    return TArray<UOTWDMetagameMissionRuntime*>();
}

void UOTWDMetaManager::GetAllCompletedMissionRewards(FOTWDCompletedMissionsInfo& OutCompletedMissionsInfo) {
}

int32 UOTWDMetaManager::GetActiveMissionsCount() {
    return 0;
}

TArray<UOTWDMetagameMissionRuntime*> UOTWDMetaManager::GetActiveMissions() {
    return TArray<UOTWDMetagameMissionRuntime*>();
}

void UOTWDMetaManager::EventShownNewSurvivors() {
}

void UOTWDMetaManager::EventShownCampSummary() {
}

bool UOTWDMetaManager::EventNeedsShowingNewSurvivors() {
    return false;
}

bool UOTWDMetaManager::EventNeedsShowingCampSummary() {
    return false;
}

bool UOTWDMetaManager::DonateWeaponToTimeLimitedVendor(int32 InventoryIndex, FGuid WeaponSavedDataGuid) {
    return false;
}

bool UOTWDMetaManager::DonateSVRToTimeLimitedVendor(int32 InventoryIndex, int32 Amount) {
    return false;
}

bool UOTWDMetaManager::CollectTimeLimitedVendorItems(TArray<FGuid>& GeneratedWeapons, TArray<FGuid>& GeneratedWeaponParts) {
    return false;
}

void UOTWDMetaManager::ClearCompletedMissionsList() {
}

void UOTWDMetaManager::ChangeMorale(float AmountToChange) {
}

bool UOTWDMetaManager::CanWeAffordToGoOnAvailableMission(UOTWDMetagameMissionRuntime* MissionData, FOTWDMetagameCurrency& OutMissingResources) {
    return false;
}

bool UOTWDMetaManager::CanWandererBeFoundInMission(USBZLevelSchematic* LevelSchematic) {
    return false;
}

bool UOTWDMetaManager::CanWandererBeFoundInCurrentMission() {
    return false;
}

bool UOTWDMetaManager::CanLocalPlayerRescueWanderer() {
    return false;
}

float UOTWDMetaManager::CalculateSuccessRate(UOTWDMetagameMissionRuntime* MissionData, const TArray<UOTWDMetagameSurvivor*>& SurvivorsOnMission, UOTWDMetagameSurvivorCampMoraleLevelData* CampMoraleLevelData) {
    return 0.0f;
}

void UOTWDMetaManager::CalculateAllCompletedMissionRewards() {
}

bool UOTWDMetaManager::AreNewSurvivorsInCamp(UObject* WorldContextObject) {
    return false;
}

bool UOTWDMetaManager::AreNewMissionsAvailable(UObject* WorldContextObject) {
    return false;
}

bool UOTWDMetaManager::AreMissionsCompleted(UObject* WorldContextObject) {
    return false;
}

void UOTWDMetaManager::AddNewAvailableMission() {
}

void UOTWDMetaManager::AddMissionsForNewDay() {
}

UOTWDMetaManager::UOTWDMetaManager() {
    this->bWasUpKeepPaidThisTurn = false;
    this->SurvivorManager = NULL;
    this->SavedData = NULL;
    this->GameInstance = NULL;
    this->WandererRescuableMission = NULL;
}

