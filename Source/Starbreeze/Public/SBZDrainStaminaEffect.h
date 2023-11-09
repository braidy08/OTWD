#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "SBZDrainStaminaEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZDrainStaminaEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZDrainStaminaEffect();
};

