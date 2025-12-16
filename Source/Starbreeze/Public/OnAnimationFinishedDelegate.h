#pragma once
#include "CoreMinimal.h"
#include "OnAnimationFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimationFinished, float, OpenValue);

