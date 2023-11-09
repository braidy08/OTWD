#pragma once
#include "CoreMinimal.h"
#include "ESBZBTTask_RangedAttack_LineOfSightAction.generated.h"

UENUM()
enum class ESBZBTTask_RangedAttack_LineOfSightAction : int32 {
    DontChange,
    RequireLineOfSight,
    DoNotRequireLineOfSight,
    ESBZBTTask_RangedAttack_MAX UMETA(Hidden),
};

