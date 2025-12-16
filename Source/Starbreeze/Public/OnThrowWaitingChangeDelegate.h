#pragma once
#include "CoreMinimal.h"
#include "OnThrowWaitingChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnThrowWaitingChange, bool, bIsWaiting);

