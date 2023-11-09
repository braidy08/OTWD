#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorAttackType.generated.h"

UENUM(BlueprintType)
enum class ESBZDoorAttackType : uint8 {
    None,
    AgainstTheDoor,
    NotAgainstTheDoor,
};

