#pragma once
#include "CoreMinimal.h"
#include "ArmorPartTakenDamageSignatureDelegate.generated.h"

class AActor;
class AController;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FArmorPartTakenDamageSignature, AActor*, ArmorOwner, AActor*, DamagedArmor, float, Damage, const UDamageType*, DamageType, AController*, InstigatedBy, AActor*, DamageCauser);

