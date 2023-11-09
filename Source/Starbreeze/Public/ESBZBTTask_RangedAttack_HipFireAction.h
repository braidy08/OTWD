#pragma once
#include "CoreMinimal.h"
#include "ESBZBTTask_RangedAttack_HipFireAction.generated.h"

UENUM()
enum class ESBZBTTask_RangedAttack_HipFireAction : int32 {
    DontChange,
    EnableHipFire,
    DisableHipFire,
    ESBZBTTask_RangedAttack_MAX UMETA(Hidden),
};

