#pragma once
#include "CoreMinimal.h"
#include "ESBZEndMissionHandlerState.generated.h"

UENUM(BlueprintType)
enum class ESBZEndMissionHandlerState : uint8 {
    None,
    Success,
    Failure,
    Neutral,
    SuccessCountdown,
    NeutralCountdown,
};

