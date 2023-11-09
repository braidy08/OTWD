#pragma once
#include "CoreMinimal.h"
#include "OnPopupClosedDelegate.generated.h"

class USBZPopupWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPopupClosed, USBZPopupWidget*, PopupWidget);

