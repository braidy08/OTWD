#pragma once
#include "CoreMinimal.h"
#include "EACTHandlerState.generated.h"

UENUM(BlueprintType)
enum class EACTHandlerState : uint8 {
    InActive,
    Starting,
    Using,
    WaitingForNextTick,
};

