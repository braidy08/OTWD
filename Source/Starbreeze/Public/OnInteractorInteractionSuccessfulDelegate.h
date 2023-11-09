#pragma once
#include "CoreMinimal.h"
#include "OnInteractorInteractionSuccessfulDelegate.generated.h"

class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractorInteractionSuccessful, USBZInteractableComponent*, Interactable);

