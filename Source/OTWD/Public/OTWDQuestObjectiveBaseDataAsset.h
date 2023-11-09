#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EOTWDQuestObjectiveType.h"
#include "OTWDQuestObjectiveBaseDataAsset.generated.h"

UCLASS(Blueprintable, Const)
class UOTWDQuestObjectiveBaseDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> DisplayFormattingArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HudNotificationDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectiveCompletionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountToNotifyUIOnObjectiveUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOTWDQuestObjectiveType ObjectiveType;
    
    UOTWDQuestObjectiveBaseDataAsset();
};

