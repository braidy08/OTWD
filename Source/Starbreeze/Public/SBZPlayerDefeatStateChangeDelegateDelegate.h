#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerDefeatState.h"
#include "SBZPlayerDefeatStateChangeDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZPlayerDefeatStateChangeDelegate, ESBZPlayerDefeatState, NewState, AActor*, Owner);

