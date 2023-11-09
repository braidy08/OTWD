#pragma once
#include "CoreMinimal.h"
#include "CarriableCanBeReleasedChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCarriableCanBeReleasedChanged, bool, bCanRelease);

