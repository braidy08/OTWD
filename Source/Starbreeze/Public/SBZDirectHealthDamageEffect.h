#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "SBZDirectHealthDamageEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, MinimalAPI)
class USBZDirectHealthDamageEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZDirectHealthDamageEffect();

};

