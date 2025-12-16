#pragma once
#include "CoreMinimal.h"
#include "OnTriggeredSingatureDelegate.generated.h"

class AOTWDProgressTrigger;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTriggeredSingature, AOTWDProgressTrigger*, Trigger);

