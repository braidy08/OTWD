#pragma once
#include "CoreMinimal.h"
#include "IsInteractionAllowedByInteractorDelegate.generated.h"

class USBZBaseInteractorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FIsInteractionAllowedByInteractor, const USBZBaseInteractorComponent*, Interactor);

