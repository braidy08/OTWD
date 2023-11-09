#pragma once
#include "CoreMinimal.h"
#include "OnTakeFromChangedDelegate.generated.h"

class USBZInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTakeFromChanged, const TArray<USBZInventoryComponent*>&, TakeFromInventoryComponents);

