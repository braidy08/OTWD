#pragma once
#include "CoreMinimal.h"
#include "ESBZPinningType.h"
#include "PinVictimActorAddedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPinVictimActorAddedDelegate, AActor*, NewPinnedActor, ESBZPinningType, PinningType);

