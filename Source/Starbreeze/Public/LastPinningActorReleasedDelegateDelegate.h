#pragma once
#include "CoreMinimal.h"
#include "ESBZPinningType.h"
#include "LastPinningActorReleasedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLastPinningActorReleasedDelegate, AActor*, LastPinningActor, ESBZPinningType, PinningType);

