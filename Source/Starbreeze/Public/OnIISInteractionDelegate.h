#pragma once
#include "CoreMinimal.h"
#include "OnIISInteractionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIISInteraction, int32, UserIndex);

