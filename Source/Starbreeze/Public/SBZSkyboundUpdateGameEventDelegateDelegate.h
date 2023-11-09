#pragma once
#include "CoreMinimal.h"
#include "SBZSkyboundUpdateGameEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZSkyboundUpdateGameEventDelegate, int32, Status, const FString&, Msg);

