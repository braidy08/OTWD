#pragma once
#include "CoreMinimal.h"
#include "EOTWDGameIntensity.generated.h"

UENUM(BlueprintType)
enum class EOTWDGameIntensity : uint8 {
    Stealth,
    Neutral,
    Combat,
    Invalid,
};

