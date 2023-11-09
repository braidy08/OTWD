#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EOTWDPlayFabQuestProgression.h"
#include "EOTWDQuestType.h"
#include "OTWDQuestStatics.generated.h"

class UOTWDQuestDataAsset;
class UOTWDQuestDataAssetRoot;
class UOTWDQuestManager;
class UOTWDQuestRuntime;
class UOTWDQuestScriptObjectiveDataAsset;
class UObject;
class USBZLevelSchematic;

UCLASS(Blueprintable)
class OTWD_API UOTWDQuestStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOTWDQuestStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateBountyData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UnlockQuest(const UObject* WorldContextObject, const UOTWDQuestDataAsset* QuestToUnlock);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UnlockBounty(const UObject* WorldContextObject, const UOTWDQuestDataAsset* BountyToUnlock);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TurnInQuest(const UObject* WorldContextObject, const UOTWDQuestDataAsset* InQuestToTurnIn, bool& bWasQuestCompleted);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool TurnInBounties(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsQuestActive(const UObject* WorldContextObject, const UOTWDQuestDataAsset* InQuestData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasWeeklyRecievedServerValidation(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasQuestBeenCompleted(const UObject* WorldContextObject, const UOTWDQuestDataAsset* InQuestData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EOTWDPlayFabQuestProgression GetWeeklyQuestState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetQuestsForLevel(const UObject* WorldContextObject, USBZLevelSchematic* InLevelSchematic, TArray<UOTWDQuestRuntime*>& OutActiveQuestRuntimes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetQuestRuntimes(const UObject* WorldContextObject, TArray<UOTWDQuestRuntime*>& OutActiveQuestRuntimes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOTWDQuestDataAssetRoot* GetQuestRootData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOTWDQuestManager* GetQuestManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBountyHeaderText(const UOTWDQuestDataAsset* InQuestData, FText& OutQuestObjectiveDescriptions);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAvailableDailyBounties(const UObject* WorldContextObject, const TArray<UOTWDQuestDataAsset*>& OutAvailableDailyBounties);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllQuestsOfQuestType(const UObject* WorldContextObject, EOTWDQuestType QuestType, TArray<UOTWDQuestRuntime*>& OutActiveQuestRuntimes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UOTWDQuestRuntime* GetActiveQuestFromQuestData(const UObject* WorldContextObject, const UOTWDQuestDataAsset* InQuestData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CompleteQuestScriptObjectiveForQuest(const UObject* WorldContextObject, const UOTWDQuestDataAsset* InQuestData, const UOTWDQuestScriptObjectiveDataAsset* InObjectiveToComplete, int32 ObjectiveCountToIncrement);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CompleteQuestScriptObjective(const UObject* WorldContextObject, const UOTWDQuestScriptObjectiveDataAsset* InObjectiveToComplete, int32 ObjectiveCountToIncrement);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearQuestChangedFlag(const UObject* WorldContextObject, const UOTWDQuestDataAsset* InQuestData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanTurnInBounties(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool AreAnyQuestsAwaitingTurnIn(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AbandonActiveBounty(const UObject* WorldContextObject, UOTWDQuestRuntime* InQuestToAbandon);
    
};

