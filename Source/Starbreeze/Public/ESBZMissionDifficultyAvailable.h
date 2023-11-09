#pragma once
#include "CoreMinimal.h"
#include "ESBZMissionDifficultyAvailable.generated.h"

UENUM(BlueprintType)
enum class ESBZMissionDifficultyAvailable : uint8 {
    DifficultyAvailable,
    DifficultyLocked,
};

