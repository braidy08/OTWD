#pragma once
#include "CoreMinimal.h"
#include "EThrowableProjectileState.generated.h"

UENUM(BlueprintType)
enum class EThrowableProjectileState : uint8 {
    Idle,
    Flying,
    Stuck,
};

