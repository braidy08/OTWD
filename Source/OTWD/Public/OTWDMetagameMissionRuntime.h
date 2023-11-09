#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDMetagameSurvivorMission.h"
#include "OTWDMissionRewardInfo.h"
#include "OTWDMetagameMissionRuntime.generated.h"

class UOTWDMetagameSurvivor;
class UOTWDMetagameSurvivorCampMoraleLevelData;

UCLASS(Blueprintable)
class OTWD_API UOTWDMetagameMissionRuntime : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivor*> SurvivorsOnMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivor*> SurvivorsLevelledUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TurnsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMissionComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasMissionASuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDidSurvivorsDieOnMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMissionRewardInfo MissionRewardInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOldestMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime TimeOfExpiry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNew;
    
    UOTWDMetagameMissionRuntime();
    UFUNCTION(BlueprintCallable)
    void StartMission(const TArray<UOTWDMetagameSurvivor*>& SurvivorList, UOTWDMetagameSurvivorCampMoraleLevelData* CampMoraleLevelOnMissionStart);
    
    UFUNCTION(BlueprintCallable)
    void SetIsNew(bool bNew);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMissionXP(TArray<UOTWDMetagameSurvivor*> SurvivorsAssigned);
    
    UFUNCTION(BlueprintCallable)
    FOTWDMetagameSurvivorMission GetMissionData();
    
    UFUNCTION(BlueprintCallable)
    FOTWDMetagameCurrency GetMissionCurrencyRewards(TArray<UOTWDMetagameSurvivor*> SurvivorsAssigned);
    
    UFUNCTION(BlueprintCallable)
    float GetCompletionPercent();
    
    UFUNCTION(BlueprintCallable)
    int32 GetActualTurnsToCompletion();
    
};

