#pragma once
#include "CoreMinimal.h"
#include "SBZNumberOfSurvivorsThresholdPair.generated.h"

USTRUCT(BlueprintType)
struct FSBZNumberOfSurvivorsThresholdPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumberOfSurvivors;
    
    OTWD_API FSBZNumberOfSurvivorsThresholdPair();
};

