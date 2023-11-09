#pragma once
#include "CoreMinimal.h"
#include "EntitlementPurchaseCompleteDelegate.generated.h"

class USBZContentPack;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEntitlementPurchaseComplete, bool, bSucceeded, const FText&, ErrorMessage, const TSoftObjectPtr<USBZContentPack>&, PurchasedContentPack);

