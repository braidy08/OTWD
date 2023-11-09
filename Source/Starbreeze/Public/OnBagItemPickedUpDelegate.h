#pragma once
#include "CoreMinimal.h"
#include "OnBagItemPickedUpDelegate.generated.h"

class ASBZBagItem;
class ASBZCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBagItemPickedUp, ASBZBagItem*, PickedUpBagItem, ASBZCharacter*, CharacterWhoPickedUp);

