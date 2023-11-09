#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerOnlineStatusStruct.h"
#include "OnPlayerOnlineStatusChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerOnlineStatusChangedDelegate, FSBZPlayerOnlineStatusStruct, PlayerInfo);

