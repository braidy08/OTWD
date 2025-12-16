#pragma once
#include "CoreMinimal.h"
#include "OnHUDStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHUDStateChanged, bool, bAttachedToViewport);

