#pragma once
#include "CoreMinimal.h"
#include "DestinationReachedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDestinationReachedDelegate, AActor*, DestinationActor);

