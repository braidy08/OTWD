#pragma once
#include "CoreMinimal.h"
#include "ESBZControllerUIType.h"
#include "OnControllerUITypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnControllerUITypeChanged, ESBZControllerUIType, Type);

