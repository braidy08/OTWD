#pragma once
#include "CoreMinimal.h"
#include "RequestFortificationCheckDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestFortificationCheck, APawn*, PlayerPawn);

