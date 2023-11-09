#pragma once
#include "CoreMinimal.h"
#include "EHumanFollowerStatus.generated.h"

UENUM(BlueprintType)
enum class EHumanFollowerStatus : uint8 {
    Following,
    Idle,
    Incapacitated,
};

