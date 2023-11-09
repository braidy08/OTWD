#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZOnKillData.h"
#include "ChangedActiveQuestRuntimesDelegate.h"
#include "OTWDInstancedQuestGroup.h"
#include "OTWDQuestRewards.h"
#include "OnQuestCompleteDelegate.h"
#include "OnQuestObjectiveUpdatedDelegate.h"
#include "OnQuestRewardProcessingCompleteDelegate.h"
#include "OnQuestServerDataChangedDelegate.h"
#include "OTWDQuestManager.generated.h"

class UOTWDBountySaveData;
class UOTWDGameInstance;
class UOTWDQuestDataAsset;
class UOTWDQuestRuntime;
class USBZTech;

UCLASS(Blueprintable)
class OTWD_API UOTWDQuestManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedActiveQuestRuntimes OnQuestRuntimesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestComplete OnQuestComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestServerDataChanged OnQuestServerDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestRewardProcessingComplete OnQuestRewardProcessingComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestObjectiveUpdated OnQuestObjectiveUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOTWDBountySaveData* BountySaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOTWDQuestRewards WeeklyReward;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDQuestRuntime*> ActiveQuests;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDInstancedQuestGroup AvailableInstancedQuests[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOTWDGameInstance* GameInstance;
    
public:
    UOTWDQuestManager();
    UFUNCTION(BlueprintCallable)
    bool UnlockQuest(const UOTWDQuestDataAsset* InQuestData);
    
    UFUNCTION(BlueprintCallable)
    void RefreshActiveQuests();
    
    UFUNCTION(BlueprintCallable)
    void OnStateEntered(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    void OnKilled(const FSBZOnKillData& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnGlobalTechPurchased(const USBZTech* MetaTech);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOTWDQuestRewards GetWeeklyQuestRewards();
    
    UFUNCTION(BlueprintCallable)
    bool CanQuestBeUnlocked(const UOTWDQuestDataAsset* InQuestData);
    
};

