#pragma once
#include "CoreMinimal.h"
#include "OnPlayBubbleStateChangedDelegate.generated.h"

class ASBZPlayBubble;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayBubbleStateChanged, ASBZPlayBubble*, Bubble);

