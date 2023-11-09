#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "SBZReduceLocomotionSpeedDurationEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZReduceLocomotionSpeedDurationEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    USBZReduceLocomotionSpeedDurationEffect();
};

