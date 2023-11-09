#pragma once
#include "CoreMinimal.h"
#include "OnInteractionPreventedDelegate.generated.h"

class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionPrevented, USBZInteractableComponent*, Interactable, USBZBaseInteractorComponent*, Interactor);

