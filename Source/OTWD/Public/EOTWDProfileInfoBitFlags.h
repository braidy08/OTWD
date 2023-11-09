#pragma once
#include "CoreMinimal.h"
#include "EOTWDProfileInfoBitFlags.generated.h"

UENUM(BlueprintType)
enum class EOTWDProfileInfoBitFlags : uint8 {
    CanRescueWanderer,
    MAX = 0x8,
};

