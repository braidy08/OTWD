#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZSetStrengthToStandupEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZSetStrengthToStandupEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZSetStrengthToStandupEffect();

};

