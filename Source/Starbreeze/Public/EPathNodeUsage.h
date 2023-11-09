#pragma once
#include "CoreMinimal.h"
#include "EPathNodeUsage.generated.h"

UENUM(BlueprintType)
enum class EPathNodeUsage : uint8 {
    Entry,
    Exit,
    Guide,
};

