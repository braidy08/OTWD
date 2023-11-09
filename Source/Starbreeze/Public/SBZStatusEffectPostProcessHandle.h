#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "Components/PostProcessComponent.h"
#include "SBZStatusEffectPostProcessHandle.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZStatusEffectPostProcessHandle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRichCurve FadeoutCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComponent;
    
public:
    FSBZStatusEffectPostProcessHandle();
};

