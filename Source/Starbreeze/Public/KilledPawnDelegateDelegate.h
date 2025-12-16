#pragma once
#include "CoreMinimal.h"
#include "KilledPawnDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKilledPawnDelegate, APawn*, DeadPawn);

