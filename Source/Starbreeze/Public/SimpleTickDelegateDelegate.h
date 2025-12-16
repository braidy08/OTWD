#pragma once
#include "CoreMinimal.h"
#include "SimpleTickDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSimpleTickDelegate, float, DeltaTime);

