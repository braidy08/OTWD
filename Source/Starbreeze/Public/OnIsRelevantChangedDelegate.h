#pragma once
#include "CoreMinimal.h"
#include "OnIsRelevantChangedDelegate.generated.h"

class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnIsRelevantChanged, USBZInteractableComponent*, Interactable, USBZBaseInteractorComponent*, Interactor, bool, bIsRelevant);

