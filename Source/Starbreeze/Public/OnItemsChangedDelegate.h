#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryItem.h"
#include "OnItemsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemsChanged, const TArray<FSBZInventoryItem>&, Items);

