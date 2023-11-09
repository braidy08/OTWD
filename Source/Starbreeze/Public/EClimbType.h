#pragma once
#include "CoreMinimal.h"
#include "EClimbType.generated.h"

UENUM(BlueprintType)
enum class EClimbType : uint8 {
    CS_VAULTING,
    CS_MANTLING,
    CS_MAX UMETA(Hidden),
};

