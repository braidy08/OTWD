#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerGrappleCountChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSBZPlayerGrappleCountChanged, bool, bIsPlayerAttacker, int32, GrappleCount, bool, bIsIncrease, AActor*, Opponent);

