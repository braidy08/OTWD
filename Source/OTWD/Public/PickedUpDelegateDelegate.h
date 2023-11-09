#pragma once
#include "CoreMinimal.h"
#include "PickedUpDelegateDelegate.generated.h"

class AOTWDBlueprintPickup;
class AOTWDPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPickedUpDelegate, AOTWDBlueprintPickup*, Pickup, AOTWDPlayerCharacter*, Instagator);

