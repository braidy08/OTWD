#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZLastStandEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZLastStandEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZLastStandEffect();

};

