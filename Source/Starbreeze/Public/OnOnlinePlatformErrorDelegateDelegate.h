#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineSessionRequestType.h"
#include "OnOnlinePlatformErrorDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOnlinePlatformErrorDelegate, ESBZOnlineSessionRequestType, RequestType);

