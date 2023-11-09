#pragma once
#include "CoreMinimal.h"
#include "OnInteractionEndedDelegate.generated.h"

class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionEnded, USBZInteractableComponent*, Interactable, USBZBaseInteractorComponent*, Interactor);

