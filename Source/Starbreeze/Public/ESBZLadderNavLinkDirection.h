#pragma once
#include "CoreMinimal.h"
#include "ESBZLadderNavLinkDirection.generated.h"

UENUM(BlueprintType)
enum class ESBZLadderNavLinkDirection : uint8 {
    BottomToTop,
    TopToBottom,
    BothWays,
    NoneTraversable,
};

