#pragma once
#include "CoreMinimal.h"
#include "SBZActData.generated.h"

class USBZActAnimationSetSchematic;

USTRUCT(BlueprintType)
struct FSBZActData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActAnimationSetSchematic* AnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopingUsingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UsingAnimationDuration;
    
    STARBREEZE_API FSBZActData();
};

