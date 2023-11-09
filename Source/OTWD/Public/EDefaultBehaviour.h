#pragma once
#include "CoreMinimal.h"
#include "EDefaultBehaviour.generated.h"

UENUM(BlueprintType)
enum class EDefaultBehaviour : uint8 {
    S_None,
    S_Idle,
    S_ReturnHome,
    S_RandomRoaming,
    S_Max,
};

