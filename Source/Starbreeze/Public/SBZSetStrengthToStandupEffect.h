#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "SBZSetStrengthToStandupEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZSetStrengthToStandupEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZSetStrengthToStandupEffect();
};

