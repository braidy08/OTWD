#pragma once
#include "CoreMinimal.h"
#include "ESBZButtonInputType.h"
#include "ActionPanelInteractionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActionPanelInteraction, const FName, ActionName, ESBZButtonInputType, InputType);

