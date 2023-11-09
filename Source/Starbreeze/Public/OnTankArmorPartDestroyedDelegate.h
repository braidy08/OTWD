#pragma once
#include "CoreMinimal.h"
#include "OnTankArmorPartDestroyedDelegate.generated.h"

class USBZTankArmorPartComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTankArmorPartDestroyed, USBZTankArmorPartComponent*, DestroyedArmorPart);

