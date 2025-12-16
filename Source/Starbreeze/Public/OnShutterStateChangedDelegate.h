#pragma once
#include "CoreMinimal.h"
#include "ESBZShutterState.h"
#include "OnShutterStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShutterStateChanged, ESBZShutterState, ShutterState);

