#pragma once
#include "CoreMinimal.h"
#include "ESBZGhostInteractionDataSlot.h"
#include "OnGhostInteractableInitializedDelegate.generated.h"

class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGhostInteractableInitialized, USBZInteractableComponent*, Interactable, ESBZGhostInteractionDataSlot, Slot);

