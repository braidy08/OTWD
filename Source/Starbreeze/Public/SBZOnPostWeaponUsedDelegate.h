#pragma once
#include "CoreMinimal.h"
#include "SBZOnPostWeaponUsedDelegate.generated.h"

class ASBZCharacter;
class ASBZWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnPostWeaponUsed, ASBZCharacter*, Character, ASBZWeapon*, Weapon);

