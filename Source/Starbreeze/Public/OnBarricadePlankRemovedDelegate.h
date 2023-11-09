#pragma once
#include "CoreMinimal.h"
#include "OnBarricadePlankRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBarricadePlankRemoved, int32, PlankIndex);

