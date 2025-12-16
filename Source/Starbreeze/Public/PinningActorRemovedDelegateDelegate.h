#pragma once
#include "CoreMinimal.h"
#include "ESBZPinningType.h"
#include "PinningActorRemovedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPinningActorRemovedDelegate, AActor*, PinningActor, ESBZPinningType, PinningType);

