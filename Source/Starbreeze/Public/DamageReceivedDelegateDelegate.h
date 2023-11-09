#pragma once
#include "CoreMinimal.h"
#include "DamageReceivedData.h"
#include "DamageReceivedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDamageReceivedDelegate, const FDamageReceivedData&, DamageData);

