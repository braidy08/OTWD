#pragma once
#include "CoreMinimal.h"
#include "ESBZReturnToMainMenuReason.h"
#include "OnOnlineUiMatchRejectedEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOnlineUiMatchRejectedEventDelegate, ESBZReturnToMainMenuReason, Reason);

