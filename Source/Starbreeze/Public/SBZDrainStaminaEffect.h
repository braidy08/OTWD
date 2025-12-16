#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZDrainStaminaEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZDrainStaminaEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZDrainStaminaEffect();

};

