#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessStateAdditionalProperties.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlertnessStateAdditionalProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintainedAggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCombatAvailable;
    
    FSBZAlertnessStateAdditionalProperties();
};

