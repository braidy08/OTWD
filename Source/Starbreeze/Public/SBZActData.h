#pragma once
#include "CoreMinimal.h"
#include "SBZActData.generated.h"

USTRUCT(BlueprintType)
struct FSBZActData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimationSetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopingUsingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UsingAnimationDuration;
    
    STARBREEZE_API FSBZActData();
};

