#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStateChangedDelegateDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateChangedDelegate, APlayerState*, PlayerState);

