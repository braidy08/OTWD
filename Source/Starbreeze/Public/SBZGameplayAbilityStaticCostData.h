#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZGameplayAbilityStaticCostData.generated.h"

USTRUCT(BlueprintType)
struct FSBZGameplayAbilityStaticCostData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticMagnitude;
    
    STARBREEZE_API FSBZGameplayAbilityStaticCostData();
};

