#pragma once
#include "CoreMinimal.h"
#include "CameraViewportStateSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraViewportStateSignature, AActor*, TargetActor);

