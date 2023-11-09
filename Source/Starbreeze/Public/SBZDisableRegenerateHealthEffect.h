#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "SBZDisableRegenerateHealthEffect.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZDisableRegenerateHealthEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZDisableRegenerateHealthEffect();
};

