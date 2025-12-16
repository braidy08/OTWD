#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectExecutionCalculation -FallbackName=GameplayEffectExecutionCalculation
#include "SBZHealExecution.generated.h"

UCLASS(Blueprintable)
class USBZHealExecution : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USBZHealExecution();

};

