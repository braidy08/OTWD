#pragma once
#include "CoreMinimal.h"
#include "ESBZPerceptionMemoryOperation.generated.h"

UENUM(BlueprintType)
enum class ESBZPerceptionMemoryOperation : uint8 {
    GetLastKnownLocation,
    GetFakeLastKnownLocation,
    SetFakeLastKnownLocation,
    GetFakeLastKnownNavLocation,
};

