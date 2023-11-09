#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NodeEventPlan.h"
#include "PathSectionFillerEventPlan.h"
#include "PathSectionPlan.generated.h"

class UNodeEventCategory;

USTRUCT(BlueprintType)
struct FPathSectionPlan {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval PathCostBudget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNodeEventPlan GoalEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPathSectionFillerEventPlan FillerEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNodeEventCategory*> FillerEventCategories;
    
    STARBREEZE_API FPathSectionPlan();
};

