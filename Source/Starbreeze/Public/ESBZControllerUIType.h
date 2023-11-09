#pragma once
#include "CoreMinimal.h"
#include "ESBZControllerUIType.generated.h"

UENUM(BlueprintType)
enum class ESBZControllerUIType : uint8 {
    Keyboard,
    Xbox,
    Playstation,
    Vita,
};

