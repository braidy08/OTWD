#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGoalType.h"
#include "AIGoalData.generated.h"

USTRUCT(BlueprintType)
struct FAIGoalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGoalType GoalType;
    
    OTWD_API FAIGoalData();
};

