#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerDefeatBoolDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZPlayerDefeatBoolDelegate, bool, bValue);

