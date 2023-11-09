#pragma once
#include "CoreMinimal.h"
#include "SBZActionEnabledChangedDelegate.generated.h"

class USBZBaseAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZActionEnabledChanged, USBZBaseAction*, Action);

