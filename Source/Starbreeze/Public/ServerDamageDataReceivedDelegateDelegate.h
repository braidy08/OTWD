#pragma once
#include "CoreMinimal.h"
#include "SBZDamageData.h"
#include "ServerDamageDataReceivedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FServerDamageDataReceivedDelegate, const FSBZDamageData&, DamageData);

