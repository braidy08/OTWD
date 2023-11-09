#pragma once
#include "CoreMinimal.h"
#include "EThrownAttackState.generated.h"

UENUM(BlueprintType)
enum class EThrownAttackState : uint8 {
    Idle,
    Aiming,
    Throwing,
    Cooldown,
    Error,
};

