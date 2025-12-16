#pragma once
#include "CoreMinimal.h"
#include "OnGlobalWidgetsVisibilityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGlobalWidgetsVisibilityChanged, int32, VisibilityMask);

