#pragma once
#include "CoreMinimal.h"
#include "EPathConnectionState.generated.h"

UENUM(BlueprintType)
enum class EPathConnectionState : uint8 {
    Uninitialized,
    Opened,
    FullyClosed,
    PartiallyClosed,
};

