#pragma once
#include "CoreMinimal.h"
#include "ESBZModularPartMeshMode.generated.h"

UENUM(BlueprintType)
enum class ESBZModularPartMeshMode : uint8 {
    NONE,
    SkeletalMesh,
    StaticMesh,
};

