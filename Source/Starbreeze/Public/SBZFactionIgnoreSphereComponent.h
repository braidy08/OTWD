#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "SBZFactionIgnoreSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZFactionIgnoreSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    USBZFactionIgnoreSphereComponent();
};

