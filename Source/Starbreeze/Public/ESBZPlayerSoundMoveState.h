#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerSoundMoveState.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerSoundMoveState : uint8 {
    StartWalk,
    StartRun,
    WalkToRun,
    RunToWalk,
    StopWalk,
    StopRun,
};

