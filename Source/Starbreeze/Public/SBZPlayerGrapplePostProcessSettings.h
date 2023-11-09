#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerGrappleDepthOfFieldSettings.h"
#include "SBZPlayerGrappleNonDepthOfFieldSettings.h"
#include "SBZPlayerGrapplePostProcessSettings.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerGrapplePostProcessSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrappleDepthOfFieldSettings DepthOfField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrappleNonDepthOfFieldSettings OtherPostProcessing;
    
    FSBZPlayerGrapplePostProcessSettings();
};

