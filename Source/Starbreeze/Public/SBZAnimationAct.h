#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAct.h"
#include "SBZAnimationAct.generated.h"

class USBZActAnimationSetSchematic;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAnimationAct : public USBZAct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActAnimationSetSchematic* AnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopingUsingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UsingAnimationDuration;
    
    USBZAnimationAct();
};

