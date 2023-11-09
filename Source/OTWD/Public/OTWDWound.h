#pragma once
#include "CoreMinimal.h"
#include "OTWDBodyWoundEffect.h"
#include "OTWDWound.generated.h"

USTRUCT(BlueprintType)
struct FOTWDWound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDBodyWoundEffect> BodyEffectArray;
    
    OTWD_API FOTWDWound();
};

