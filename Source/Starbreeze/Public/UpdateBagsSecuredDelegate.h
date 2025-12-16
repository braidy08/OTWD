#pragma once
#include "CoreMinimal.h"
#include "UpdateBagsSecuredDelegate.generated.h"

class ASBZBagItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateBagsSecured, const TArray<ASBZBagItem*>&, SecuredBags);

