#pragma once
#include "CoreMinimal.h"
#include "ZombieTryReachingData.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FZombieTryReachingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToPlayAnim;
    
    FZombieTryReachingData();
};

