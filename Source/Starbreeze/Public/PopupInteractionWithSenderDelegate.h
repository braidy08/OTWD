#pragma once
#include "CoreMinimal.h"
#include "ESBZButtonInputType.h"
#include "PopupInteractionWithSenderDelegate.generated.h"

class USBZPopupWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPopupInteractionWithSender, const FName, ActionName, ESBZButtonInputType, InputType, USBZPopupWidget*, WidgetPointer);

