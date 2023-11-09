#pragma once
#include "CoreMinimal.h"
#include "ENotificationPriority.generated.h"

UENUM(BlueprintType)
enum class ENotificationPriority : uint8 {
    Error,
    Warning,
    Message,
    Debug,
};

