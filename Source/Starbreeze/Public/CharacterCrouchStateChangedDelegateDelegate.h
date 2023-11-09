#pragma once
#include "CoreMinimal.h"
#include "CharacterCrouchStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterCrouchStateChangedDelegate, bool, bIsNowCrouched);

