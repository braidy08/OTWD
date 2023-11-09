#pragma once
#include "CoreMinimal.h"
#include "OnSecurityCameraTargetLostDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSecurityCameraTargetLost, AActor*, LostActor);

