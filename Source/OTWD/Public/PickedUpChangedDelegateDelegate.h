#pragma once
#include "CoreMinimal.h"
#include "PickedUpChangedDelegateDelegate.generated.h"

class AOTWDBlueprintPickup;
class AOTWDPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPickedUpChangedDelegate, AOTWDBlueprintPickup*, Pickup, AOTWDPlayerCharacter*, Instagator, bool, bIsPickedUp);

