#pragma once
#include "CoreMinimal.h"
#include "OnHideLevelTutorialDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHideLevelTutorial, bool, bSkipAnimation);

