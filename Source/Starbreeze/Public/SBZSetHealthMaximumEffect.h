#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffect -FallbackName=GameplayEffect
#include "SBZSetHealthMaximumEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZSetHealthMaximumEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZSetHealthMaximumEffect();

};

