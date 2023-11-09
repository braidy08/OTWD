#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "SBZDirectHealthDamageModifierEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZDirectHealthDamageModifierEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZDirectHealthDamageModifierEffect();
};

