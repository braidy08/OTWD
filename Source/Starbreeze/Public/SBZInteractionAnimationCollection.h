#pragma once
#include "CoreMinimal.h"
#include "SBZAnimationCollection.h"
#include "SBZInteractionAnimationCollection.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class STARBREEZE_API USBZInteractionAnimationCollection : public USBZAnimationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Enter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Exit;
    
    USBZInteractionAnimationCollection();

};

