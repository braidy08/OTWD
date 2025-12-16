#pragma once
#include "CoreMinimal.h"
#include "GrappleStartedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrappleStartedDelegate, AActor*, MainAttackerActor);

