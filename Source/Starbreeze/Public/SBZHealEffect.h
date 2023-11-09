#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "SBZHealEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, MinimalAPI)
class USBZHealEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZHealEffect();
};

