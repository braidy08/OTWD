#pragma once
#include "CoreMinimal.h"
#include "StopDistanceData.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FStopDistanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopRandomDistanceFromTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinStopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStopDistance;
    
    FStopDistanceData();
};

