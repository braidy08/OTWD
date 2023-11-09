#pragma once
#include "CoreMinimal.h"
#include "OnInteractionStateChangedDelegate.generated.h"

class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionStateChanged, USBZInteractableComponent*, Interactable, bool, bEnabled);

