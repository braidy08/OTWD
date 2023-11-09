#pragma once
#include "CoreMinimal.h"
#include "OTWDDefenceFortifications.h"
#include "OnUpdateDefenceFortificationsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateDefenceFortifications, FOTWDDefenceFortifications, UpdatedFortifications);

