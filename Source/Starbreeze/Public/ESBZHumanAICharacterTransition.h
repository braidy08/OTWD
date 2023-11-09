#pragma once
#include "CoreMinimal.h"
#include "ESBZHumanAICharacterTransition.generated.h"

UENUM(BlueprintType)
enum class ESBZHumanAICharacterTransition : uint8 {
    None,
    IdleToSprint,
    SprintToIdle,
    CoverToSprint,
    SprintToCover,
};

