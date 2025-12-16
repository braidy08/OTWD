#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZRegenerateHealthEffect.generated.h"

UCLASS(Blueprintable)
class USBZRegenerateHealthEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZRegenerateHealthEffect();

};

