#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerGrapplePostProcessSingleBlendSettings.h"
#include "SBZPlayerGrapplePostProcessBlendAndIntensitySettings.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerGrapplePostProcessBlendAndIntensitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrapplePostProcessSingleBlendSettings BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerGrapplePostProcessSingleBlendSettings BlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHealthBasedIntensityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthBasedIntensityMinHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthBasedIntensityMaxHealth;
    
    FSBZPlayerGrapplePostProcessBlendAndIntensitySettings();
};

