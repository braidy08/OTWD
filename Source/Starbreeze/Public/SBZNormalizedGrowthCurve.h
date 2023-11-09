#pragma once
#include "CoreMinimal.h"
#include "SBZNormalizedGrowthCurve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSBZNormalizedGrowthCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    STARBREEZE_API FSBZNormalizedGrowthCurve();
};

