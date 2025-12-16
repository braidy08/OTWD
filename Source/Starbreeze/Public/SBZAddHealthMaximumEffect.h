#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZAddHealthMaximumEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZAddHealthMaximumEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZAddHealthMaximumEffect();

};

