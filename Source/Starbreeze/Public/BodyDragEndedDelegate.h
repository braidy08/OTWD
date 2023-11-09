#pragma once
#include "CoreMinimal.h"
#include "BodyDragEndedDelegate.generated.h"

class USBZBodyDraggingComponent;
class USBZDraggableBodyComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBodyDragEnded, USBZDraggableBodyComponent*, Component, USBZBodyDraggingComponent*, Caller);

