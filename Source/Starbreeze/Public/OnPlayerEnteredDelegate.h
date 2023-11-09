#pragma once
#include "CoreMinimal.h"
#include "OnPlayerEnteredDelegate.generated.h"

class ASBZPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerEntered, int32, PlayersInZone, ASBZPlayerCharacter*, LatestPlayer);

