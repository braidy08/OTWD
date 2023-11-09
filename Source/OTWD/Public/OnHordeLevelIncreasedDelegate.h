#pragma once
#include "CoreMinimal.h"
#include "OnHordeLevelIncreasedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHordeLevelIncreased, int32, NewHordeLevel);

