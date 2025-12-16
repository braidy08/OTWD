#pragma once
#include "CoreMinimal.h"
#include "ESBZLadderClimbActionType.h"
#include "ClimbActionEndedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClimbActionEndedDelegate, ESBZLadderClimbActionType, EndedClimbAction);

