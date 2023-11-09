#pragma once
#include "CoreMinimal.h"
#include "SBZAlignTargetSlotsAvailabilityChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZAlignTargetSlotsAvailabilityChangedDelegate, bool, bIsNowAnyAvailable);

