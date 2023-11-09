#pragma once
#include "CoreMinimal.h"
#include "OnInteractableHighlightMeshesChangedDelegate.generated.h"

class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractableHighlightMeshesChanged, USBZInteractableComponent*, Interactable);

