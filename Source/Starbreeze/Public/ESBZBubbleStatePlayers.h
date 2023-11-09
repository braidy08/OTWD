#pragma once
#include "CoreMinimal.h"
#include "ESBZBubbleStatePlayers.generated.h"

UENUM(BlueprintType)
enum class ESBZBubbleStatePlayers : uint8 {
    Allowed,
    Warning,
    Disallowed,
};

