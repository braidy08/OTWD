#pragma once
#include "CoreMinimal.h"
#include "OnActorMarkedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorMarked, AActor*, Actor, bool, bIsMarked);

