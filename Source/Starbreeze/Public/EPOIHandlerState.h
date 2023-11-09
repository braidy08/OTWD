#pragma once
#include "CoreMinimal.h"
#include "EPOIHandlerState.generated.h"

UENUM(BlueprintType)
enum class EPOIHandlerState : uint8 {
    InActive,
    Starting,
    Using,
};

