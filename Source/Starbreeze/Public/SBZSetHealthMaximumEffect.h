#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "SBZSetHealthMaximumEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZSetHealthMaximumEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZSetHealthMaximumEffect();

};

