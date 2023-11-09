#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorStateType.h"
#include "OnDoorStateWithOldStateChangedDelegate.generated.h"

class ASBZDoor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDoorStateWithOldStateChanged, ESBZDoorStateType, NewState, ESBZDoorStateType, OldState, ASBZDoor*, Door);

