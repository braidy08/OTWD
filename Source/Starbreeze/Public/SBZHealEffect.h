#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZHealEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, MinimalAPI)
class USBZHealEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZHealEffect();

};

