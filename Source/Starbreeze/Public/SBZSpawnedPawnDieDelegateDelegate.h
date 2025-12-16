#pragma once
#include "CoreMinimal.h"
#include "SBZSpawnedPawnDieInfo.h"
#include "SBZSpawnedPawnDieDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZSpawnedPawnDieDelegate, const FSBZSpawnedPawnDieInfo&, PawnDieInfo);

