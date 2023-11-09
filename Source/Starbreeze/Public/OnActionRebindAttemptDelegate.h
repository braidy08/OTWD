#pragma once
#include "CoreMinimal.h"
#include "OnActionRebindAttemptDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionRebindAttempt, bool, bResult);

