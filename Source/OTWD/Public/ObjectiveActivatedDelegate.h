#pragma once
#include "CoreMinimal.h"
#include "OTWDObjectiveEvent.h"
#include "ObjectiveActivatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveActivated, const FOTWDObjectiveEvent&, ObjectiveEvent);

