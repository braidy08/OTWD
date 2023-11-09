#pragma once
#include "CoreMinimal.h"
#include "AkEventDurationSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAkEventDurationSignature, float, Duration, float, EstimatedDuration);

