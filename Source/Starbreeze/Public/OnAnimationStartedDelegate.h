#pragma once
#include "CoreMinimal.h"
#include "OnAnimationStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimationStarted, float, ValueToAnimateTo);

