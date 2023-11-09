#pragma once
#include "CoreMinimal.h"
#include "EOTWDPlayFabQuestProgression.generated.h"

UENUM(BlueprintType)
enum class EOTWDPlayFabQuestProgression : uint8 {
    Inactive,
    InProgress,
    Completed,
    Expired,
    AwaitingUpdate,
};

