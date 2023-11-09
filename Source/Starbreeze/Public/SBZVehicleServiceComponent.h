#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZVehicleServiceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZVehicleServiceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USBZVehicleServiceComponent();
};

