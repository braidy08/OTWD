#pragma once
#include "CoreMinimal.h"
#include "EntitlementQueryCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEntitlementQueryComplete, bool, UpdatedSucceeded, int32, UpdateQueryResultCode);

