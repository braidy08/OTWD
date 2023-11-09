#pragma once
#include "CoreMinimal.h"
#include "AIGoalData.h"
#include "AIGoalChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIGoalChangedDelegate, FAIGoalData, NewGoal);

