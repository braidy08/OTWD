#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOTWDQuestType.h"
#include "OTWDQuestObjectiveRequirements.h"
#include "OTWDQuestObjectiveRuntime.h"
#include "OTWDQuestRuntime.generated.h"

class UOTWDQuestDataAsset;

UCLASS(Blueprintable)
class OTWD_API UOTWDQuestRuntime : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDQuestObjectiveRuntime> ActiveQuestObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestObjectiveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TurnsToComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuestChangedFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsQuestComplete;
    
    UOTWDQuestRuntime();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestChangedFlagSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOfQuestType(EOTWDQuestType InQuestType);
    
    UFUNCTION(BlueprintCallable)
    bool IsObjectiveLevelRequirementMet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAwaitingTurnIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOTWDQuestDataAsset* GetQuestData() const;
    
    UFUNCTION(BlueprintCallable)
    void GetObjectiveRequirements(FOTWDQuestObjectiveRequirements& OutObjectiveRequirements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetObjectivePercentageComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOTWDQuestObjectiveRuntime> GetActiveObjectives() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearQuestChangedFlag();
    
};

