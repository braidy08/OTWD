#pragma once
#include "CoreMinimal.h"
#include "PatrolPointReachedDelegateDelegate.generated.h"

class APawn;
class ASBZAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPatrolPointReachedDelegate, APawn*, Pawn, ASBZAIController*, Controller);

