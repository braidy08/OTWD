#pragma once
#include "CoreMinimal.h"
#include "SBZInteractableComponent.h"
#include "SBZPlayerHelpStandInteractableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerHelpStandInteractableComponent : public USBZInteractableComponent {
    GENERATED_BODY()
public:
    USBZPlayerHelpStandInteractableComponent();
};

