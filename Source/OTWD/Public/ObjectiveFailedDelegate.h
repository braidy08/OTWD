#pragma once
#include "CoreMinimal.h"
#include "OTWDObjectiveEvent.h"
#include "ObjectiveFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveFailed, const FOTWDObjectiveEvent&, ObjectiveEvent);

