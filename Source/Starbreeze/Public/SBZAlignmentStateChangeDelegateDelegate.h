#pragma once
#include "CoreMinimal.h"
#include "ESBZAlignSlotState.h"
#include "SBZAlignmentStateChangeDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSBZAlignmentStateChangeDelegate, ESBZAlignSlotState, State, AActor*, Occupant);

