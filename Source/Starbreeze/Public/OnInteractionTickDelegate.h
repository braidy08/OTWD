#pragma once
#include "CoreMinimal.h"
#include "OnInteractionTickDelegate.generated.h"

class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionTick, USBZInteractableComponent*, Interactable, USBZBaseInteractorComponent*, Interactor);

