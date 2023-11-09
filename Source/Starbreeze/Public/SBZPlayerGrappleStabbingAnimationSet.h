#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerGrappleStabbingAnimationSet.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerGrappleStabbingAnimationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayerAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ZombieAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayerLegsAnimation;
    
    FSBZPlayerGrappleStabbingAnimationSet();
};

