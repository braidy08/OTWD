#pragma once
#include "CoreMinimal.h"
#include "OnGlobalObjectiveTextChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGlobalObjectiveTextChanged, const FText&, GlobalObjectiveText);

