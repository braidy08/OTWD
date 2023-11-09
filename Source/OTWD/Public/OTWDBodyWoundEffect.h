#pragma once
#include "CoreMinimal.h"
#include "OTWDWoundEffect.h"
#include "OTWDBodyWoundEffect.generated.h"

USTRUCT(BlueprintType)
struct FOTWDBodyWoundEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDWoundEffect Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DuplicatesWoundIndex;
    
    OTWD_API FOTWDBodyWoundEffect();
};

