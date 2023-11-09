#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OTWDMetagameSurvivorBuildingRuntime.generated.h"

class UOTWDMetagameSurvivor;
class UOTWDMetagameSurvivorBuildingDataAsset;

UCLASS(Blueprintable)
class OTWD_API UOTWDMetagameSurvivorBuildingRuntime : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDMetagameSurvivorBuildingDataAsset* BuildingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivor*> SurvivorsInBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivor*> SurvivorsPendingAssignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivor*> SurvivorsPendingUnassignment;
    
public:
    UOTWDMetagameSurvivorBuildingRuntime();
    UFUNCTION(BlueprintCallable)
    void RemoveSurvivorFromBuilding(UOTWDMetagameSurvivor* SurvivorToRemove, bool& WasRemovalSuccess);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnlockedSurvivorSlots();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumSurvivorsInBuilding();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxSurvivorSlots();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBuildingLevel();
    
    UFUNCTION(BlueprintCallable)
    float GetBonusProgression();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBonusLevelUnlocked();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmBuildingChanges();
    
    UFUNCTION(BlueprintCallable)
    void ClearBuildingOfAllSurvivors();
    
    UFUNCTION(BlueprintCallable)
    void CancelBuildingChanges();
    
    UFUNCTION(BlueprintCallable)
    float CalculateBonusProgressionChangeOnAssign(UOTWDMetagameSurvivor* SurvivorToAssign, int32& OutNewLevelIfAssigned);
    
    UFUNCTION(BlueprintCallable)
    void AssignSurvivorToBuilding(UOTWDMetagameSurvivor* SurvivorToAssign, bool& WasAssignSuccess);
    
};

