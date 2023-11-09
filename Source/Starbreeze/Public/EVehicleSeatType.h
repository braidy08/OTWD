#pragma once
#include "CoreMinimal.h"
#include "EVehicleSeatType.generated.h"

UENUM(BlueprintType)
enum class EVehicleSeatType : uint8 {
    E_Driver,
    E_Passenger,
    E_Pawn,
    E_None,
    E_MAX UMETA(Hidden),
};

