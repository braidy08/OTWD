#pragma once
#include "CoreMinimal.h"
#include "AlertnessChangedDelegateDelegate.generated.h"

class USBZAlertnessComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAlertnessChangedDelegate, USBZAlertnessComponent*, Sender, float, NewAlertness);

