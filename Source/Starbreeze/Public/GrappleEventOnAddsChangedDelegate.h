#pragma once
#include "CoreMinimal.h"
#include "GrappleEventOnAddsChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGrappleEventOnAddsChanged, bool, bAddRemoved, AActor*, AddActor, int32, NewAddCount);

