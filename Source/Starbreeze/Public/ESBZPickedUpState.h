#pragma once
#include "CoreMinimal.h"
#include "ESBZPickedUpState.generated.h"

UENUM(BlueprintType)
enum class ESBZPickedUpState : uint8 {
    NotSet,
    Placed,
    PickedUp,
    Thrown,
    AttachedWorldHidden,
    Secured,
};

