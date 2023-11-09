#pragma once
#include "CoreMinimal.h"
#include "ESBZGrappleState.h"
#include "SBZAnimNotify_BaseNotify.h"
#include "AnimNotify_GrappleAnimationEnded.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API UAnimNotify_GrappleAnimationEnded : public USBZAnimNotify_BaseNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZGrappleState AnimationState;
    
    UAnimNotify_GrappleAnimationEnded();
};

