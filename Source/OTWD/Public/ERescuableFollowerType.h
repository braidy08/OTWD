#pragma once
#include "CoreMinimal.h"
#include "ERescuableFollowerType.generated.h"

UENUM(BlueprintType)
enum class ERescuableFollowerType : uint8 {
    Random,
    Critical,
};

