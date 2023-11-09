#pragma once
#include "CoreMinimal.h"
#include "SBZPrecomputedVisibilityBucket.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPrecomputedVisibilityBucket {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> BucketedCells;
    
    FSBZPrecomputedVisibilityBucket();
};

