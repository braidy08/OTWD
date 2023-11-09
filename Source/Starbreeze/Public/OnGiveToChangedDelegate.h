#pragma once
#include "CoreMinimal.h"
#include "OnGiveToChangedDelegate.generated.h"

class USBZInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGiveToChanged, const TArray<USBZInventoryComponent*>&, GiveToInventoryComponents);

