#pragma once
#include "CoreMinimal.h"
#include "SBZPawnSpawnedInfo.h"
#include "SBZPawnSpawnedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZPawnSpawnedDelegate, const FSBZPawnSpawnedInfo&, SpawnInfo);

