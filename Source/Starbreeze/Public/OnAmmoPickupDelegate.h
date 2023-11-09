#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponFamily.h"
#include "ESBZWeaponSlotType.h"
#include "OnAmmoPickupDelegate.generated.h"

class ASBZPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnAmmoPickup, ASBZPlayerCharacter*, Character, ESBZWeaponFamily, WeaponFamily, ESBZWeaponSlotType, WeaponSlot, int32, Amount);

