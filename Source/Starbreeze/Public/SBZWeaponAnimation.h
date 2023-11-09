#pragma once
#include "CoreMinimal.h"
#include "SBZBaseAnimation.h"
#include "SBZWeaponAnimation.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZWeaponAnimation : public USBZBaseAnimation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFiringStateReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* IdleEmptyAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* IdleJammedAnimation;
    
public:
    USBZWeaponAnimation();
};

