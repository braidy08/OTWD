#pragma once
#include "CoreMinimal.h"
#include "LostPawnDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLostPawnDelegate, APawn*, Pawn);

