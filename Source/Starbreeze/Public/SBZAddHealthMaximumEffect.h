#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "SBZAddHealthMaximumEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZAddHealthMaximumEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZAddHealthMaximumEffect();

};

