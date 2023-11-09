#pragma once
#include "CoreMinimal.h"
#include "MessageReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMessageReceived, const FString&, InMessage, const FString&, UserName);

