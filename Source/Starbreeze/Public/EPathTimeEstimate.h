#pragma once
#include "CoreMinimal.h"
#include "EPathTimeEstimate.generated.h"

UENUM(BlueprintType)
enum class EPathTimeEstimate : uint8 {
    Instant,
    Miniscule,
    VeryShort,
    Short,
    Moderate = 0x5,
    Long = 0x8,
    VeryLong = 0xD,
    Enormous = 0x15,
};

