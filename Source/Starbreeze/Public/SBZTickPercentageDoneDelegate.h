#pragma once
#include "CoreMinimal.h"
#include "SBZTickPercentageDoneDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZTickPercentageDone, float, PercentageDone);

