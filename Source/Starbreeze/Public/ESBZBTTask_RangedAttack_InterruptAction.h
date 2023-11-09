#pragma once
#include "CoreMinimal.h"
#include "ESBZBTTask_RangedAttack_InterruptAction.generated.h"

UENUM()
enum class ESBZBTTask_RangedAttack_InterruptAction : int32 {
    DontChange,
    Pause,
    Resume,
    ESBZBTTask_RangedAttack_MAX UMETA(Hidden),
};

