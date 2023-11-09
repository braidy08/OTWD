#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerGrappleMiscellaneous.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerGrappleMiscellaneous {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IKFadeTime;
    
    FSBZPlayerGrappleMiscellaneous();
};

