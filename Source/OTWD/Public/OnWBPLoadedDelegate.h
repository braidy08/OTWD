#pragma once
#include "CoreMinimal.h"
#include "WBPLoadedParams.h"
#include "OnWBPLoadedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnWBPLoaded, const FWBPLoadedParams&, RequestParams);

