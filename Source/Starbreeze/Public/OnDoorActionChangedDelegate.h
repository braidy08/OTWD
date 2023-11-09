#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorActionType.h"
#include "OnDoorActionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoorActionChanged, ESBZDoorActionType, Action);

