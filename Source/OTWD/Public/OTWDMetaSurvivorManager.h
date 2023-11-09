#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESurvivorOrder.h"
#include "OTWDMetaSurvivorManager.generated.h"

class UOTWDMetagameSurvivor;

UCLASS(Blueprintable)
class OTWD_API UOTWDMetaSurvivorManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivor*> Survivors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivor*> SurvivorsPendingAssignement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivor*> SurvivorsAbandoningCamp;
    
public:
    UOTWDMetaSurvivorManager();
    UFUNCTION(BlueprintCallable)
    void SurvivorAbandonCamp(UOTWDMetagameSurvivor* Survivor, bool& bOutDidSurvivorAbandonCamp);
    
    UFUNCTION(BlueprintCallable)
    void SortSurvivors(const ESurvivorOrder NewSurvivorOrder);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSurvivor(UOTWDMetagameSurvivor* Survivor, bool& bOutWasSurvivorRemoved);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllDeadSurvivors();
    
    UFUNCTION(BlueprintCallable)
    int32 ProvisionCostToBanishASurvivor(bool& bCanPlayerAffordBanishment);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSurvivorsCount(const ESurvivorOrder NewSurvivorOrder);
    
    UFUNCTION(BlueprintCallable)
    TArray<UOTWDMetagameSurvivor*> GetSurvivors();
    
    UFUNCTION(BlueprintCallable)
    TArray<UOTWDMetagameSurvivor*> GetPendingSurvivors();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxSurvivorsInCamp();
    
    UFUNCTION(BlueprintCallable)
    uint8 GetAverageSurvivorLevel();
    
    UFUNCTION(BlueprintCallable)
    TArray<UOTWDMetagameSurvivor*> GetAbandonedSurvivors();
    
    UFUNCTION(BlueprintCallable)
    TArray<UOTWDMetagameSurvivor*> FilterSurvivors(const ESurvivorOrder NewSurvivorOrder);
    
    UFUNCTION(BlueprintCallable)
    void ClearAbandonedSurvivorList();
    
    UFUNCTION(BlueprintCallable)
    bool CanRemoveSurvivor(UOTWDMetagameSurvivor* Survivor);
    
    UFUNCTION(BlueprintCallable)
    void BanishSurvivor(UOTWDMetagameSurvivor* Survivor, const bool& bShouldSpendProvisions, bool& bOutWasBanishmentSuccessful);
    
    UFUNCTION(BlueprintCallable)
    int32 AddPendingSurvivors(TArray<UOTWDMetagameSurvivor*> SelectedSurvivors);
    
};

