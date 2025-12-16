#pragma once
#include "CoreMinimal.h"
#include "OnInterationIsRelevantChangedDelegate.generated.h"

class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInterationIsRelevantChanged, USBZInteractableComponent*, Interactable, USBZBaseInteractorComponent*, Interactor, bool, bIsRelevant);

