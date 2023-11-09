#pragma once
#include "CoreMinimal.h"
#include "ESBZBTTask_ThrownAttack_LineOfSightAction.generated.h"

UENUM(BlueprintType)
enum class ESBZBTTask_ThrownAttack_LineOfSightAction : uint8 {
    DontChange,
    RequireLineOfSight,
    DoNotRequireLineOfSight,
    ESBZBTTask_ThrownAttack_MAX UMETA(Hidden),
};

