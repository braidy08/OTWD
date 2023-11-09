#pragma once
#include "CoreMinimal.h"
#include "OnPlayerLookingAtMarkerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerLookingAtMarker, bool, bShow);

