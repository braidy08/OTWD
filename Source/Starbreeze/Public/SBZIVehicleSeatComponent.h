#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBZIVehicleSeatComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZIVehicleSeatComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USBZIVehicleSeatComponent();
};

