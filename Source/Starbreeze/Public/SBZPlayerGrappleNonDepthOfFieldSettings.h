#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerGrappleMotionBlurSettings.h"
#include "SBZPlayerGrapplePostProcessBlendAndIntensitySettings.h"
#include "SBZPlayerGrappleNonDepthOfFieldSettings.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerGrappleNonDepthOfFieldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrapplePostProcessBlendAndIntensitySettings BlendAndIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrappleMotionBlurSettings MotionBlurConfig;
    
    FSBZPlayerGrappleNonDepthOfFieldSettings();
};

