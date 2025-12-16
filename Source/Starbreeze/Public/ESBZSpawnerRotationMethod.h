#pragma once
#include "CoreMinimal.h"
#include "ESBZSpawnerRotationMethod.generated.h"

UENUM(BlueprintType)
enum class ESBZSpawnerRotationMethod : uint8 {
    SpawnerRotation,
    SpecificHeadingAngle,
};

