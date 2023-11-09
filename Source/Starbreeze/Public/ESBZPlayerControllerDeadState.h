#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerControllerDeadState.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerControllerDeadState : uint8 {
    None,
    Start,
    Delay,
    FadeOut,
    WaitForNewPawn,
    FadeIn,
    Spectate,
};

