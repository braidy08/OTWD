#pragma once
#include "CoreMinimal.h"
#include "OnSettingsTabForceSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSettingsTabForceSelected, int32, TabIndex);

