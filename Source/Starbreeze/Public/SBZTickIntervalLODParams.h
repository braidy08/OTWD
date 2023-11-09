#pragma once
#include "CoreMinimal.h"
#include "SBZTickIntervalLODParams.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZTickIntervalLODParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerDistanceFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterDistanceFromPlayer;
    
    FSBZTickIntervalLODParams();
};

