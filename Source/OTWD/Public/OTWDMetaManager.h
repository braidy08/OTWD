#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "OTWDCampSummary.h"
#include "OTWDCompletedMissionsInfo.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDMissionEndReport.h"
#include "OTWDNewSurvivorsSummary.h"
#include "OTWDMetaManager.generated.h"

class UOTWDGameInstance;
class UOTWDMetaSurvivorManager;
class UOTWDMetagameMissionRuntime;
class UOTWDMetagameSaveData;
class UOTWDMetagameSurvivor;
class UOTWDMetagameSurvivorBuildingRuntime;
class UOTWDMetagameSurvivorCampMoraleLevelData;
class USBZAISchematic;
class USBZLevelSchematic;
class USBZUnlockable;

UCLASS(Blueprintable)
class OTWD_API UOTWDMetaManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChangedMetagameSurvivors);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChangedMetagameMissions);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChangedMetagameBuildings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChangedMetagame);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDCampSummary CampSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDNewSurvivorsSummary NewSurvivorsSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasUpKeepPaidThisTurn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedMetagame OnMetagameChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedMetagameBuildings OnBuildingsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedMetagameMissions OnMissionsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedMetagameSurvivors OnSurvivorsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDMetaSurvivorManager* SurvivorManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOTWDMetagameSaveData* SavedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOTWDGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOTWDCompletedMissionsInfo LatestCompletedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameMissionRuntime*> AvailableMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameMissionRuntime*> ActiveMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameMissionRuntime*> CompletedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivorBuildingRuntime*> Buildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZUnlockable*> TimelimitedVendorInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* WandererRescuableMission;
    
public:
    UOTWDMetaManager();
    UFUNCTION(BlueprintCallable)
    void UpdateOldestMission();
    
    UFUNCTION(BlueprintCallable)
    void StartMission(UOTWDMetagameMissionRuntime* MissionData, const TArray<UOTWDMetagameSurvivor*>& SurvivorList, bool& bStartMissionWasASuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldWandererSpawnInMission();
    
    UFUNCTION(BlueprintCallable)
    void SaveMetagame();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOldestMission();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayFabStart();
    
    UFUNCTION(BlueprintCallable)
    void OnCampDefenceEnd(bool bSuccess, int32 Difficulty);
    
    UFUNCTION(BlueprintCallable)
    bool IsTimeLimitedVendorItemsCollectable();
    
    UFUNCTION(BlueprintCallable)
    bool IsTimeLimitedVendorActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveEnoughResources(const FOTWDMetagameCurrency& InResources) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZLevelSchematic* GetWandererRescuableMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<USBZAISchematic> GetWandererAISchematic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpKeepMaxTurns();
    
    UFUNCTION(BlueprintCallable)
    FOTWDMetagameCurrency GetUpkeepCost();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTurnsToNextUpkeepPay();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTurnIndex();
    
    UFUNCTION(BlueprintCallable)
    UOTWDMetaSurvivorManager* GetSurvivorManager();
    
    UFUNCTION(BlueprintCallable)
    FOTWDMetagameCurrency GetResources();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMissionCompleteXp(UOTWDMetagameMissionRuntime* MissionData, const bool& bWasMissionASuccess);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxSurvivorSlots();
    
    UFUNCTION(BlueprintCallable)
    FOTWDMissionEndReport GetLastMissionReport();
    
    UFUNCTION(BlueprintCallable)
    int32 GetHQLevel();
    
    UFUNCTION(BlueprintCallable)
    UOTWDMetagameSurvivorCampMoraleLevelData* GetCurrentCampMoraleLevelData();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentCampMoraleLevel();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCompletedMissionsCount();
    
    UFUNCTION(BlueprintCallable)
    TArray<UOTWDMetagameMissionRuntime*> GetCompletedMissions();
    
    UFUNCTION(BlueprintCallable)
    TArray<UOTWDMetagameSurvivorBuildingRuntime*> GetBuildings();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAvailableMissionsCount();
    
    UFUNCTION(BlueprintCallable)
    TArray<UOTWDMetagameMissionRuntime*> GetAvailableMissions();
    
    UFUNCTION(BlueprintCallable)
    void GetAllCompletedMissionRewards(FOTWDCompletedMissionsInfo& OutCompletedMissionsInfo);
    
    UFUNCTION(BlueprintCallable)
    int32 GetActiveMissionsCount();
    
    UFUNCTION(BlueprintCallable)
    TArray<UOTWDMetagameMissionRuntime*> GetActiveMissions();
    
    UFUNCTION(BlueprintCallable)
    void EventShownNewSurvivors();
    
    UFUNCTION(BlueprintCallable)
    void EventShownCampSummary();
    
    UFUNCTION(BlueprintCallable)
    bool EventNeedsShowingNewSurvivors();
    
    UFUNCTION(BlueprintCallable)
    bool EventNeedsShowingCampSummary();
    
    UFUNCTION(BlueprintCallable)
    bool DonateWeaponToTimeLimitedVendor(int32 InventoryIndex, FGuid WeaponSavedDataGuid);
    
    UFUNCTION(BlueprintCallable)
    bool DonateSVRToTimeLimitedVendor(int32 InventoryIndex, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    bool CollectTimeLimitedVendorItems(TArray<FGuid>& GeneratedWeapons, TArray<FGuid>& GeneratedWeaponParts);
    
    UFUNCTION(BlueprintCallable)
    void ClearCompletedMissionsList();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMorale(float AmountToChange);
    
    UFUNCTION(BlueprintCallable)
    bool CanWeAffordToGoOnAvailableMission(UOTWDMetagameMissionRuntime* MissionData, FOTWDMetagameCurrency& OutMissingResources);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanWandererBeFoundInMission(USBZLevelSchematic* LevelSchematic);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanWandererBeFoundInCurrentMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLocalPlayerRescueWanderer();
    
    UFUNCTION(BlueprintCallable)
    float CalculateSuccessRate(UOTWDMetagameMissionRuntime* MissionData, const TArray<UOTWDMetagameSurvivor*>& SurvivorsOnMission, UOTWDMetagameSurvivorCampMoraleLevelData* CampMoraleLevelData);
    
    UFUNCTION(BlueprintCallable)
    void CalculateAllCompletedMissionRewards();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AreNewSurvivorsInCamp(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AreNewMissionsAvailable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AreMissionsCompleted(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void AddNewAvailableMission();
    
    UFUNCTION(BlueprintCallable)
    void AddMissionsForNewDay();
    
};

