#pragma once
#include "CoreMinimal.h"
#include "OnOnlineCharacterChangedEventDelegateDelegate.generated.h"

class USBZCharacterSchematic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOnlineCharacterChangedEventDelegate, USBZCharacterSchematic*, OldCharacter, USBZCharacterSchematic*, NewCharacter);

