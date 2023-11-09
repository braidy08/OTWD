#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableActivationAnimationData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FSBZEquippableActivationAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    STARBREEZE_API FSBZEquippableActivationAnimationData();
};

