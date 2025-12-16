#pragma once
#include "CoreMinimal.h"
#include "EClimbType.h"
#include "MVActionEndedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMVActionEndedDelegate, EClimbType, EndedMVAction);

