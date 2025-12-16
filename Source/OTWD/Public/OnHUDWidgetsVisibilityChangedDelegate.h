#pragma once
#include "CoreMinimal.h"
#include "OnHUDWidgetsVisibilityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHUDWidgetsVisibilityChanged, int32, VisibilityMask);

