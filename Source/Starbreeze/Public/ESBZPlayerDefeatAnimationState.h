#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerDefeatAnimationState.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerDefeatAnimationState : uint8 {
    None,
    BleedOut,
    Downed,
    DownedWithSyncPinner,
    DownedWithPinner,
    Dead,
    Reviving,
};

