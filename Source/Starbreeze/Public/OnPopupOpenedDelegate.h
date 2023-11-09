#pragma once
#include "CoreMinimal.h"
#include "OnPopupOpenedDelegate.generated.h"

class USBZPopupWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPopupOpened, USBZPopupWidget*, PopupWidget);

