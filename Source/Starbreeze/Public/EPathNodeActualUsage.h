#pragma once
#include "CoreMinimal.h"
#include "EPathNodeActualUsage.generated.h"

UENUM(BlueprintType)
enum class EPathNodeActualUsage : uint8 {
    Entry,
    Exit,
    Guide,
    None,
};

