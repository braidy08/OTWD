#pragma once
#include "CoreMinimal.h"
#include "OnSecurityCameraTargetSeenDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSecurityCameraTargetSeen, AActor*, SeenActor);

