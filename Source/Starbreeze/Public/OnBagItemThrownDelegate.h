#pragma once
#include "CoreMinimal.h"
#include "OnBagItemThrownDelegate.generated.h"

class ASBZBagItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBagItemThrown, ASBZBagItem*, ThrownBagItem);

