#pragma once
#include "CoreMinimal.h"
#include "OnInteractionProgressChangedDelegate.generated.h"

class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInteractionProgressChanged, USBZInteractableComponent*, Interactable, float, InteractionProgressSeconds, float, InteractionProgressScale);

