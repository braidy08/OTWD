#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZRegenerateArmorEffect.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZRegenerateArmorEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZRegenerateArmorEffect();

};

