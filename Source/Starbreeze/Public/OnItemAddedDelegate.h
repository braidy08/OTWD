#pragma once
#include "CoreMinimal.h"
#include "OnItemAddedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemAdded, AActor*, AddedItem, int32, ItemsInZone);

