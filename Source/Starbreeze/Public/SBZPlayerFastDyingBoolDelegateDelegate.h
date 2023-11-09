#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerFastDyingBoolDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZPlayerFastDyingBoolDelegate, bool, bValue);

