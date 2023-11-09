#pragma once
#include "CoreMinimal.h"
#include "CarriableReleasedDelegate.generated.h"

class ASBZCharacter;
class USBZCarryingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCarriableReleased, USBZCarryingComponent*, Carriable, ASBZCharacter*, Character);

