#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZDamageStrengthEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZDamageStrengthEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZDamageStrengthEffect();

};

