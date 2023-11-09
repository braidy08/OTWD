#pragma once
#include "CoreMinimal.h"
#include "ESBZAICharacterPinningAnimType.generated.h"

UENUM(BlueprintType)
enum class ESBZAICharacterPinningAnimType : uint8 {
    None,
    Pinning,
    PinningSynced,
};

