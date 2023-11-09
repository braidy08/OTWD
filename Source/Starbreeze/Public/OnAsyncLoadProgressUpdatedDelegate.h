#pragma once
#include "CoreMinimal.h"
#include "OnAsyncLoadProgressUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncLoadProgressUpdated, float, Progress);

