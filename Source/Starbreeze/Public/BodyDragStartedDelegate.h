#pragma once
#include "CoreMinimal.h"
#include "BodyDragStartedDelegate.generated.h"

class USBZBodyDraggingComponent;
class USBZDraggableBodyComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBodyDragStarted, USBZDraggableBodyComponent*, Component, USBZBodyDraggingComponent*, Caller);

