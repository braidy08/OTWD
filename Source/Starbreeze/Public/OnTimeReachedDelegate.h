#pragma once
#include "CoreMinimal.h"
#include "OnTimeReachedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTimeReached, int32, Index, float, Value);

