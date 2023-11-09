#pragma once
#include "CoreMinimal.h"
#include "EBTTask_ResetTimer_Operation.generated.h"

UENUM(BlueprintType)
enum class EBTTask_ResetTimer_Operation : uint8 {
    Start,
    Clear,
    EBTTask_ResetTimer_MAX UMETA(Hidden),
};

