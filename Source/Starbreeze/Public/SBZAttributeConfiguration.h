#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZNormalizedGrowthCurve.h"
#include "SBZAttributeConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSBZAttributeConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZNormalizedGrowthCurve GrowthCurve;
    
    STARBREEZE_API FSBZAttributeConfiguration();
};

