#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZDamageEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZDamageEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZDamageEffect();

};

