#pragma once
#include "CoreMinimal.h"
#include "SBZPropertyModifier.h"
#include "SBZPropertyModifierFill.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZPropertyModifierFill : public USBZPropertyModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FillRate;
    
public:
    USBZPropertyModifierFill();
    UFUNCTION(BlueprintCallable)
    void SetFillRate(float InFillRate);
    
};

