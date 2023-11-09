#pragma once
#include "CoreMinimal.h"
#include "OnPropertyValueChangedDelegate.generated.h"

class USBZGameProperty;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPropertyValueChanged, USBZGameProperty*, Property, float, PreviousValue, float, CurrentValue);

