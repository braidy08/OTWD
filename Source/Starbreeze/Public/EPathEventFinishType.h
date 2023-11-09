#pragma once
#include "CoreMinimal.h"
#include "EPathEventFinishType.generated.h"

UENUM(BlueprintType)
enum class EPathEventFinishType : uint8 {
    Success,
    Failure,
    Halted,
    Undefined,
};

