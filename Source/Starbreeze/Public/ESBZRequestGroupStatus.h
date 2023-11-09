#pragma once
#include "CoreMinimal.h"
#include "ESBZRequestGroupStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZRequestGroupStatus : uint8 {
    Pending,
    Started,
    Finished,
    Canceled,
    TimedOut,
};

