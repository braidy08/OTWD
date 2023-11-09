#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "SBZDamageStrengthEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZDamageStrengthEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZDamageStrengthEffect();
};

