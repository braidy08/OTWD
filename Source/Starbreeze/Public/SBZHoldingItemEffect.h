#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZHoldingItemEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZHoldingItemEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZHoldingItemEffect();

};

