#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CurveBase -FallbackName=CurveBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "SBZCurveFloatInterval.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZCurveFloatInterval : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve FloatCurves[2];
    
    USBZCurveFloatInterval();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumValue(float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaximumValue(float Time) const;
    
};

