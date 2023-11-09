#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "SBZStatusEffectPostProcessInfo.generated.h"

class USBZPostProcessSettingsPresetDataAsset;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZStatusEffectPostProcessInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPostProcessSettingsPresetDataAsset* PostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FadeoutCurve;
    
    FSBZStatusEffectPostProcessInfo();
};

