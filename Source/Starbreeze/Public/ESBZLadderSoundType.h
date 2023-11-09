#pragma once
#include "CoreMinimal.h"
#include "ESBZLadderSoundType.generated.h"

UENUM(BlueprintType)
enum class ESBZLadderSoundType : uint8 {
    NoSound,
    Enter,
    Hand,
    Foot,
    Exit,
};

