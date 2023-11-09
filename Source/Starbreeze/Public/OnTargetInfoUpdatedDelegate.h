#pragma once
#include "CoreMinimal.h"
#include "OnTargetInfoUpdatedDelegate.generated.h"

class ASBZPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTargetInfoUpdated, ASBZPlayerCharacter*, PlayerCharacter, int32, TargetedByAggroEnemies, int32, TargetedByAlertEnemies);

