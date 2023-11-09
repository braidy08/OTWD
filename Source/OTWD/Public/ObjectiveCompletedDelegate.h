#pragma once
#include "CoreMinimal.h"
#include "OTWDObjectiveEvent.h"
#include "ObjectiveCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveCompleted, const FOTWDObjectiveEvent&, ObjectiveEvent);

