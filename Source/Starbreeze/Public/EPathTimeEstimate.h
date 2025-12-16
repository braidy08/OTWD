#pragma once
#include "CoreMinimal.h"
#include "EPathTimeEstimate.generated.h"

UENUM(BlueprintType)
enum class EPathTimeEstimate : uint8 {
    Instant,
    Miniscule,
    VeryShort,
    Short,
    Moderate = 5,
    Long = 8,
    VeryLong = 13,
    Enormous = 21,
};

