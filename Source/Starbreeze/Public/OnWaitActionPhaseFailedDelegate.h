#pragma once
#include "CoreMinimal.h"
#include "ESBZGameMachineStateError.h"
#include "OnWaitActionPhaseFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWaitActionPhaseFailed, ESBZGameMachineStateError, Reason);

