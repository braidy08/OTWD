#pragma once
#include "CoreMinimal.h"
#include "ERangedAttackState.generated.h"

UENUM(BlueprintType)
enum class ERangedAttackState : uint8 {
    Idle,
    Starting,
    Aiming,
    Firing,
    Cooldown,
    Error,
};

