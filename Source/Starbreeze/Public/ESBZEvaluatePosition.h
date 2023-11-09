#pragma once
#include "CoreMinimal.h"
#include "ESBZEvaluatePosition.generated.h"

UENUM(BlueprintType)
enum class ESBZEvaluatePosition : uint8 {
    ActorLocation,
    OpenAreaAttackLocation,
    Both,
};

