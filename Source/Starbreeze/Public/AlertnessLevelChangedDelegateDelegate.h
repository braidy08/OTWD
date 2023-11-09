#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "AlertnessLevelChangedDelegateDelegate.generated.h"

class USBZAlertnessComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAlertnessLevelChangedDelegate, USBZAlertnessComponent*, Sender, FSBZAlertnessLevelIdHelper, NewLevel, FSBZAlertnessLevelIdHelper, OldLevel);

