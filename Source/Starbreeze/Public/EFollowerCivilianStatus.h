#pragma once
#include "CoreMinimal.h"
#include "EFollowerCivilianStatus.generated.h"

UENUM(BlueprintType)
enum class EFollowerCivilianStatus : uint8 {
    Following,
    Idle,
    Incapacitated,
};

