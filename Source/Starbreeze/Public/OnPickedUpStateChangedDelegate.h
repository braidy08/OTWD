#pragma once
#include "CoreMinimal.h"
#include "ESBZPickedUpState.h"
#include "OnPickedUpStateChangedDelegate.generated.h"

class ASBZPickupItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPickedUpStateChanged, ESBZPickedUpState, NewState, ASBZPickupItem*, PickupItem);

