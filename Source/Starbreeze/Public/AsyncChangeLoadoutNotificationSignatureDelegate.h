#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AsyncChangeLoadoutPayload.h"
#include "AsyncChangeLoadoutNotificationSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncChangeLoadoutNotificationSignature, FGuid, AsyncRequestGuid, const FAsyncChangeLoadoutPayload&, Payload);

