#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZDisableRegenerateHealthEffect.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZDisableRegenerateHealthEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZDisableRegenerateHealthEffect();

};

