#pragma once
#include "CoreMinimal.h"
#include "SBZDepthOfFieldSettings.h"
#include "SBZPlayerGrapplePostProcessBlendAndIntensitySettings.h"
#include "SBZPlayerGrappleDepthOfFieldSettings.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerGrappleDepthOfFieldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrapplePostProcessBlendAndIntensitySettings BlendAndIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZDepthOfFieldSettings DofConfig;
    
    FSBZPlayerGrappleDepthOfFieldSettings();
};

