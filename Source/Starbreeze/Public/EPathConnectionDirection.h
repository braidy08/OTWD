#pragma once
#include "CoreMinimal.h"
#include "EPathConnectionDirection.generated.h"

UENUM(BlueprintType)
enum class EPathConnectionDirection : uint8 {
    Forward,
    Backward,
};

