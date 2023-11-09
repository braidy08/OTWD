#pragma once
#include "CoreMinimal.h"
#include "EPathNodeState.generated.h"

UENUM(BlueprintType)
enum class EPathNodeState : uint8 {
    Uninitialized,
    Activated,
    Deactivated,
};

