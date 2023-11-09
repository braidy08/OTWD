#pragma once
#include "CoreMinimal.h"
#include "ESBZBTTask_RangedAttack_TargetAction.generated.h"

UENUM()
enum class ESBZBTTask_RangedAttack_TargetAction : int32 {
    DontChange,
    SetTarget,
    ClearTarget,
    ESBZBTTask_RangedAttack_MAX UMETA(Hidden),
};

