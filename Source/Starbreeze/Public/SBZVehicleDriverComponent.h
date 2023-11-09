#pragma once
#include "CoreMinimal.h"
#include "SBZIVehicleSeatComponent.h"
#include "SBZVehicleDriverComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZVehicleDriverComponent : public USBZIVehicleSeatComponent {
    GENERATED_BODY()
public:
    USBZVehicleDriverComponent();
};

