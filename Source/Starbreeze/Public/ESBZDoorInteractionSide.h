#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorInteractionSide.generated.h"

UENUM(BlueprintType)
enum class ESBZDoorInteractionSide : uint8 {
    None,
    Front,
    Back,
};

