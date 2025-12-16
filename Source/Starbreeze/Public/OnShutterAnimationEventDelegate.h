#pragma once
#include "CoreMinimal.h"
#include "SBZShutterAnimationEvent.h"
#include "OnShutterAnimationEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShutterAnimationEvent, FSBZShutterAnimationEvent, ShutterEvent);

