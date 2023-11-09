#pragma once
#include "CoreMinimal.h"
#include "OTWDQuestObjectiveRuntime.generated.h"

class UOTWDQuestObjectiveBaseDataAsset;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDQuestObjectiveRuntime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDQuestObjectiveBaseDataAsset* ObjectiveBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectiveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObjectiveCompleted;
    
    FOTWDQuestObjectiveRuntime();
};

