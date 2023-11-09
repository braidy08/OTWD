#pragma once
#include "CoreMinimal.h"
#include "ESBZPOIAnimation.generated.h"

UENUM(BlueprintType)
enum class ESBZPOIAnimation : uint8 {
    Intro = 0x1,
    Using,
    Exit = 0x4,
    None = 0x8,
};

