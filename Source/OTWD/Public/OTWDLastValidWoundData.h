#pragma once
#include "CoreMinimal.h"
#include "OTWDLastValidWoundData.generated.h"

USTRUCT(BlueprintType)
struct FOTWDLastValidWoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Body;
    
    OTWD_API FOTWDLastValidWoundData();
};

