#pragma once
#include "CoreMinimal.h"
#include "EClumsySettings.generated.h"

UENUM(BlueprintType)
enum class EClumsySettings : uint8 {
    None,
    Default,
    Low,
    High,
    Mega,
};

