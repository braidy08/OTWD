#pragma once
#include "CoreMinimal.h"
#include "SBZAnimationCollection.h"
#include "SBZEquippableAnimationCollection.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class STARBREEZE_API USBZEquippableAnimationCollection : public USBZAnimationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PrimaryActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SecondaryActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* TertiaryActivation;
    
    USBZEquippableAnimationCollection();
};

