#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "SBZDirectHealthDamageEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, MinimalAPI)
class USBZDirectHealthDamageEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZDirectHealthDamageEffect();
};

