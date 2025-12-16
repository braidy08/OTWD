#pragma once
#include "CoreMinimal.h"
#include "ESBZEndMissionState.h"
#include "OnMissionEndWithResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionEndWithResultDelegate, ESBZEndMissionState, EndMissionStateResult);

