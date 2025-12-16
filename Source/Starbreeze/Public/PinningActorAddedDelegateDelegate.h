#pragma once
#include "CoreMinimal.h"
#include "ESBZPinningType.h"
#include "PinningActorAddedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPinningActorAddedDelegate, AActor*, PinningActor, ESBZPinningType, PinningType);

