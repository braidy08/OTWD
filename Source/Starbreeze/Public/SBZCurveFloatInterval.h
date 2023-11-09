#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveBase.h"
#include "Curves/RichCurve.h"
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

