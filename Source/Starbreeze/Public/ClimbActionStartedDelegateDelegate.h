#pragma once
#include "CoreMinimal.h"
#include "ESBZLadderClimbActionType.h"
#include "ClimbActionStartedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClimbActionStartedDelegate, ESBZLadderClimbActionType, StartedClimbAction);

