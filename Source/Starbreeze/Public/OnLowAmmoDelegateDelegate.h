#pragma once
#include "CoreMinimal.h"
#include "OnLowAmmoDelegateDelegate.generated.h"

class ASBZPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLowAmmoDelegate, ASBZPlayerController*, PlayerController, bool, bIsAmmoLow);

