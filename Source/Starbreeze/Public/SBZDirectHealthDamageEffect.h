#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZDirectHealthDamageEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, MinimalAPI)
class USBZDirectHealthDamageEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZDirectHealthDamageEffect();

};

