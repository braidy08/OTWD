#pragma once
#include "CoreMinimal.h"
#include "EOTWDExposedSpawnerBehavior.generated.h"

UENUM(BlueprintType)
enum class EOTWDExposedSpawnerBehavior : uint8 {
    Roam,
    Seek,
    MAX,
};

