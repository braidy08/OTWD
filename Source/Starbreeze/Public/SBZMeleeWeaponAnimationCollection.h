#pragma once
#include "CoreMinimal.h"
#include "SBZAnimationCollection.h"
#include "SBZMeleeWeaponAnimationCollection.generated.h"

class UAnimSequenceBase;
class UBlendSpaceBase;

UCLASS(Blueprintable)
class STARBREEZE_API USBZMeleeWeaponAnimationCollection : public USBZAnimationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Shove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> ShoveArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* ShoveBlendSpace;
    
    USBZMeleeWeaponAnimationCollection();
};

