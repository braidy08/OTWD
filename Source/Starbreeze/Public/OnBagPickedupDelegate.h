#pragma once
#include "CoreMinimal.h"
#include "OnBagPickedupDelegate.generated.h"

class ASBZBagItem;
class ASBZCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBagPickedup, ASBZBagItem*, PickedUpBag, ASBZCharacter*, CharacterWhoPickedUp);

