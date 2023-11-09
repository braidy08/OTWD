#pragma once
#include "CoreMinimal.h"
#include "OnHordeBuildUpFrozenDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHordeBuildUpFrozen, bool, bIsFrozen);

