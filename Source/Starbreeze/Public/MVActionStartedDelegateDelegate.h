#pragma once
#include "CoreMinimal.h"
#include "EClimbType.h"
#include "MVActionStartedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMVActionStartedDelegate, EClimbType, StartedMVAction);

