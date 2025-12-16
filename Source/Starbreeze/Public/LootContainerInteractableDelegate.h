#pragma once
#include "CoreMinimal.h"
#include "LootContainerInteractableDelegate.generated.h"

class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLootContainerInteractable, USBZInteractableComponent*, Interactable, int32, InteractableIndex, USBZBaseInteractorComponent*, Interactor);

