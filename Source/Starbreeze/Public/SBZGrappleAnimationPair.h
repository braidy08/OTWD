#pragma once
#include "CoreMinimal.h"
#include "SBZGrappleAnimationPair.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGrappleAnimationPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> Attacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> Victim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> AdditionalAttackerOverride;
    
    FSBZGrappleAnimationPair();
};

