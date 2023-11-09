#pragma once
#include "CoreMinimal.h"
#include "ESBZEndMissionState.generated.h"

UENUM(BlueprintType)
enum class ESBZEndMissionState : uint8 {
    VE_SUCCESS,
    VE_FAILURE,
    VE_NEUTRAL,
    VE_MAX UMETA(Hidden),
};

