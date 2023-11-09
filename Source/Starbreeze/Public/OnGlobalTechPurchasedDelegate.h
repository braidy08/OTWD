#pragma once
#include "CoreMinimal.h"
#include "OnGlobalTechPurchasedDelegate.generated.h"

class USBZTech;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGlobalTechPurchased, const USBZTech*, TechPurchased);

