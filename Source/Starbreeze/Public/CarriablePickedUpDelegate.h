#pragma once
#include "CoreMinimal.h"
#include "CarriablePickedUpDelegate.generated.h"

class ASBZCharacter;
class USBZCarryingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCarriablePickedUp, USBZCarryingComponent*, Carriable, ASBZCharacter*, Character);

