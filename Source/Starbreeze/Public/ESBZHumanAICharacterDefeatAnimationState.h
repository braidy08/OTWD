#pragma once
#include "CoreMinimal.h"
#include "ESBZHumanAICharacterDefeatAnimationState.generated.h"

UENUM(BlueprintType)
enum class ESBZHumanAICharacterDefeatAnimationState : uint8 {
    None,
    Downed,
    DownedWithSyncPinner,
    DownedWithPinner,
    Reviving,
};

