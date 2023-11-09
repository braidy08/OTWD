#pragma once
#include "CoreMinimal.h"
#include "DraggingBodyChangedDelegate.generated.h"

class ASBZCharacter;
class USBZBodyDraggingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDraggingBodyChanged, USBZBodyDraggingComponent*, Component, ASBZCharacter*, New, ASBZCharacter*, Old);

