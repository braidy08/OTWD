#pragma once
#include "CoreMinimal.h"
#include "EHumanFollowerStatus.h"
#include "FollowerStatusChangedDelegateDelegate.generated.h"

class ASBZCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFollowerStatusChangedDelegate, EHumanFollowerStatus, NewStatus, ASBZCharacter*, ByCharacter);

