#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorEventOrientation.generated.h"

UENUM(BlueprintType)
enum class ESBZDoorEventOrientation : uint8 {
    InteractorOppositeSide,
    InteractorSide,
    Front,
    Back,
};

