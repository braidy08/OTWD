#pragma once
#include "CoreMinimal.h"
#include "SBZPropertyModifier.h"
#include "SBZPropertyModifierAddModForDuration.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZPropertyModifierAddModForDuration : public USBZPropertyModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    USBZPropertyModifierAddModForDuration();
};

