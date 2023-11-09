#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "PathSectionFillerEventPlan.generated.h"

class UNodeEventCategory;

USTRUCT(BlueprintType)
struct FPathSectionFillerEventPlan {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNodeEventCategory*> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntensityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve IntensityMaximumCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve IntensityMinimumCurve;
    
    STARBREEZE_API FPathSectionFillerEventPlan();
};

