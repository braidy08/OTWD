#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorSpeedModifier.generated.h"

UENUM(BlueprintType)
enum class ESBZDoorSpeedModifier : uint8 {
    None,
    Fast,
    Slam,
};

