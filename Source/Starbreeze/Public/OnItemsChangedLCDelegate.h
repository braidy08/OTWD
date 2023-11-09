#pragma once
#include "CoreMinimal.h"
#include "SBZAutoPickUpItemCount.h"
#include "OnItemsChangedLCDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemsChangedLC, const TArray<FSBZAutoPickUpItemCount>&, Items);

