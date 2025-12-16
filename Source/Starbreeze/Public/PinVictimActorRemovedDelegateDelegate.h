#pragma once
#include "CoreMinimal.h"
#include "ESBZPinningType.h"
#include "PinVictimActorRemovedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPinVictimActorRemovedDelegate, AActor*, PinningActor, ESBZPinningType, PinningType);

