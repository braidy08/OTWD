#pragma once
#include "CoreMinimal.h"
#include "ESBZBTTask_GetWanderLocation_Method.generated.h"

UENUM(BlueprintType)
enum class ESBZBTTask_GetWanderLocation_Method : uint8 {
    None,
    Free,
    LimitedToCurrentVolume,
    LimitedToVolumes,
    AroundLocation,
    ESBZBTTask_GetWanderLocation_MAX UMETA(Hidden),
};

