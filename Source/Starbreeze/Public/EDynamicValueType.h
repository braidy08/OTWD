#pragma once
#include "CoreMinimal.h"
#include "EDynamicValueType.generated.h"

UENUM(BlueprintType)
enum class EDynamicValueType : uint8 {
    Maximum,
    Minimum,
    RechargeDelay,
    FillRate,
};

