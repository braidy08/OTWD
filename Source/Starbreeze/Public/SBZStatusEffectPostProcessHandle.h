#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "SBZStatusEffectPostProcessHandle.generated.h"

class UPostProcessComponent;

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

