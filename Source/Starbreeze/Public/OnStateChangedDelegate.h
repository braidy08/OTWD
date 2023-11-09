#pragma once
#include "CoreMinimal.h"
#include "OnStateChangedDelegate.generated.h"

class ABinaryStateObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateChanged, ABinaryStateObject*, BinaryStateObject, bool, bState);

