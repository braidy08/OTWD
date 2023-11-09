#pragma once
#include "CoreMinimal.h"
#include "ESpawnActivationType.generated.h"

UENUM(BlueprintType)
enum class ESpawnActivationType : uint8 {
    S_None,
    S_SpawnOnGameStart,
    S_SpawnOnProximity,
    S_MAX UMETA(Hidden),
};

