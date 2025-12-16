#pragma once
#include "CoreMinimal.h"
#include "ESBZFocusOperation.generated.h"

UENUM(BlueprintType)
enum class ESBZFocusOperation : uint8 {
    None,
    Clear,
    Actor,
};

