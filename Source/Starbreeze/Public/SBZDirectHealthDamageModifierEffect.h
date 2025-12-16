#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZDirectHealthDamageModifierEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZDirectHealthDamageModifierEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZDirectHealthDamageModifierEffect();

};

