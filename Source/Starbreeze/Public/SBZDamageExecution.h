#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectExecutionCalculation -FallbackName=GameplayEffectExecutionCalculation
#include "SBZDamageExecution.generated.h"

UCLASS(Blueprintable)
class USBZDamageExecution : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USBZDamageExecution();

};

