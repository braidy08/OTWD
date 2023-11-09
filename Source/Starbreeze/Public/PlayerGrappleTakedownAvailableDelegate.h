#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerTakedownDirection.h"
#include "PlayerGrappleTakedownAvailableDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerGrappleTakedownAvailable, AActor*, TargetActor, FSBZPlayerTakedownDirection, DirectionInfo);

