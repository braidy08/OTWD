#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponRarity.h"
#include "OnAssignWeaponToPawnAtSlotDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAssignWeaponToPawnAtSlot, ESBZWeaponRarity, WeaponRarity);

