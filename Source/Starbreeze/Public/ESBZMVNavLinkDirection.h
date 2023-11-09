#pragma once
#include "CoreMinimal.h"
#include "ESBZMVNavLinkDirection.generated.h"

UENUM(BlueprintType)
enum class ESBZMVNavLinkDirection : uint8 {
    Automatic,
    LeftToRight,
    RightToLeft,
};

