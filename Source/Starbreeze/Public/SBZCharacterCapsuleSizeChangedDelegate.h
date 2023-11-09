#pragma once
#include "CoreMinimal.h"
#include "SBZCharacterCapsuleSizeChangedDelegate.generated.h"

class ASBZCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZCharacterCapsuleSizeChanged, ASBZCharacter*, Character);

