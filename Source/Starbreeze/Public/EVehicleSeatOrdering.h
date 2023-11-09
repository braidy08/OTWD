#pragma once
#include "CoreMinimal.h"
#include "EVehicleSeatOrdering.generated.h"

UENUM(BlueprintType)
enum class EVehicleSeatOrdering : uint8 {
    E_VehicleDriverSeat,
    E_VehicleSeat1,
    E_VehicleSeat2,
    E_VehicleSeat3,
    E_VehicleSeat4,
    E_VehicleSeat5,
    E_VehicleSeat6,
    E_VehicleSeat7,
    E_VehicleSeatNone,
    E_MAX UMETA(Hidden),
};

