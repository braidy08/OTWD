#pragma once
#include "CoreMinimal.h"
#include "SetupAllInteractablesDelegate.generated.h"

class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSetupAllInteractables, const TArray<USBZInteractableComponent*>&, Interactables);

