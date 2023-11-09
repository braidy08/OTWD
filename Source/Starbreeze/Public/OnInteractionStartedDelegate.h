#pragma once
#include "CoreMinimal.h"
#include "OnInteractionStartedDelegate.generated.h"

class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionStarted, USBZInteractableComponent*, Interactable, USBZBaseInteractorComponent*, Interactor);

