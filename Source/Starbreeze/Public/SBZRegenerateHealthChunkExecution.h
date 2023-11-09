#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "SBZRegenerateHealthChunkExecution.generated.h"

UCLASS(Blueprintable)
class USBZRegenerateHealthChunkExecution : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    USBZRegenerateHealthChunkExecution();
};

