#pragma once
#include "CoreMinimal.h"
#include "TrapDelegateDelegate.generated.h"

class ASBZTrap;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapDelegate, ASBZTrap*, TrapActor);

