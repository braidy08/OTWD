#pragma once
#include "CoreMinimal.h"
#include "SetContainerInteractableDelegate.generated.h"

class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetContainerInteractable, USBZInteractableComponent*, Interactable, int32, InteractableIndex);

