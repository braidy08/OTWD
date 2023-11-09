#pragma once
#include "CoreMinimal.h"
#include "ESpeakerState.generated.h"

UENUM(BlueprintType)
enum class ESpeakerState : uint8 {
    NONE,
    SPEAKING,
    MUTED,
    TEXT_MUTED,
    FINISHED_SPEAKING,
};

