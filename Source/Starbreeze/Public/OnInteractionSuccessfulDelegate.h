#pragma once
#include "CoreMinimal.h"
#include "OnInteractionSuccessfulDelegate.generated.h"

class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionSuccessful, USBZInteractableComponent*, Interactable, const TArray<USBZBaseInteractorComponent*>&, Interactors);

