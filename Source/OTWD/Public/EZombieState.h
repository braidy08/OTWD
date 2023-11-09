#pragma once
#include "CoreMinimal.h"
#include "EZombieState.generated.h"

UENUM(BlueprintType)
enum class EZombieState : uint8 {
    Lurker,
    Crawler,
    Roamer,
    Bloater,
};

