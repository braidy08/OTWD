#pragma once
#include "CoreMinimal.h"
#include "OTWDObjectiveEvent.h"
#include "ObjectiveDisabledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveDisabled, const FOTWDObjectiveEvent&, ObjectiveEvent);

