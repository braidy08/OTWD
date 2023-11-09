#pragma once
#include "CoreMinimal.h"
#include "SBZPostDamageProcessedSignatureDelegate.generated.h"

class AActor;
class AController;
class ASBZCharacter;
class USBZDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSBZPostDamageProcessedSignature, ASBZCharacter*, DamagedActor, float, Damage, const USBZDamageType*, DamageType, AController*, InstigatedBy, AActor*, DamageCauser);

