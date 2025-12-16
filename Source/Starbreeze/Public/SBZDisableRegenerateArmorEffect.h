#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZDisableRegenerateArmorEffect.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZDisableRegenerateArmorEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZDisableRegenerateArmorEffect();

};

