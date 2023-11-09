#pragma once
#include "CoreMinimal.h"
#include "OnHordeProgressUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHordeProgressUpdated, float, NewValue);

