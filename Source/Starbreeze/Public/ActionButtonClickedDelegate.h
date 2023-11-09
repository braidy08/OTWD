#pragma once
#include "CoreMinimal.h"
#include "ESBZButtonInputType.h"
#include "ActionButtonClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActionButtonClicked, const FName, ActionName, ESBZButtonInputType, InputType);

