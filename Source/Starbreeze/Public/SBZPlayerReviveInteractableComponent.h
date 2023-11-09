#pragma once
#include "CoreMinimal.h"
#include "SBZInteractableComponent.h"
#include "SBZPlayerReviveInteractableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerReviveInteractableComponent : public USBZInteractableComponent {
    GENERATED_BODY()
public:
    USBZPlayerReviveInteractableComponent();
};

