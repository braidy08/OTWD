#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "SBZDirectHealthDamageExecution.generated.h"

UCLASS(Blueprintable)
class USBZDirectHealthDamageExecution : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USBZDirectHealthDamageExecution();
};

