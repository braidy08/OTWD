#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "SBZDamageEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZDamageEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZDamageEffect();
};

