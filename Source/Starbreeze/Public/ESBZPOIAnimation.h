#pragma once
#include "CoreMinimal.h"
#include "ESBZPOIAnimation.generated.h"

UENUM(BlueprintType)
enum class ESBZPOIAnimation : uint8 {
    Intro = 1,
    Using,
    Exit = 4,
    None = 8,
};

