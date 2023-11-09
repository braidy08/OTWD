#pragma once
#include "CoreMinimal.h"
#include "ESBZButtonInputType.h"
#include "PopupInteractionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPopupInteraction, const FName, ActionName, ESBZButtonInputType, InputType);

