#pragma once
#include "CoreMinimal.h"
#include "ESBZObjectiveCallbackType.generated.h"

UENUM(BlueprintType)
enum class ESBZObjectiveCallbackType : uint8 {
    OCP_OnComplete,
    OCP_OnFail,
    OCP_OnActivate,
    OCP_OnTimerEnd,
    OCP_MAX UMETA(Hidden),
};

