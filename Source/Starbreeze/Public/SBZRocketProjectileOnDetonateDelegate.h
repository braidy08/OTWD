#pragma once
#include "CoreMinimal.h"
#include "SBZRocketProjectileOnDetonateDelegate.generated.h"

class ASBZRocketProjectile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZRocketProjectileOnDetonate, ASBZRocketProjectile*, Projectile);

