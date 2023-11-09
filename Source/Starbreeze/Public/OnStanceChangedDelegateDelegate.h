#pragma once
#include "CoreMinimal.h"
#include "SBZAIStanceIdHelper.h"
#include "OnStanceChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStanceChangedDelegate, FSBZAIStanceIdHelper, NewStance, FSBZAIStanceIdHelper, OldStance);

