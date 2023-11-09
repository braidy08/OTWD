#pragma once
#include "CoreMinimal.h"
#include "SBZProjectileHitStruct.h"
#include "OnProjectileHitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProjectileHit, FSBZProjectileHitStruct, Params);

