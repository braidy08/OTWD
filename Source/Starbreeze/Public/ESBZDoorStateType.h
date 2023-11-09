#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorStateType.generated.h"

UENUM(BlueprintType)
enum class ESBZDoorStateType : uint8 {
    NonTraversable,
    OpenFront,
    OpenBack,
    Closed,
    Barricaded,
    Broken,
    Locked,
    BrokenFront,
    BrokenBack,
    Hidden,
    Blocked,
    NotSet,
};

