#pragma once
#include "CoreMinimal.h"
#include "EHordeRelocationType.generated.h"

UENUM(BlueprintType)
enum class EHordeRelocationType : uint8 {
    Blocked,
    Allowed,
};

