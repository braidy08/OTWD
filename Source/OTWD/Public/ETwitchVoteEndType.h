#pragma once
#include "CoreMinimal.h"
#include "ETwitchVoteEndType.generated.h"

UENUM(BlueprintType)
enum class ETwitchVoteEndType : uint8 {
    TVET_Duration,
    TVET_MaxVotes,
    TVET_Manual,
    TVET_MAX UMETA(Hidden),
};

