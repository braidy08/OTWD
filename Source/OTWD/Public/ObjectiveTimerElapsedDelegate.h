#pragma once
#include "CoreMinimal.h"
#include "OTWDObjectiveEvent.h"
#include "ObjectiveTimerElapsedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FObjectiveTimerElapsed, const FOTWDObjectiveEvent&, ObjectiveEvent, float, RemainingTime);

