#pragma once
#include "CoreMinimal.h"
#include "OnBagSecuredDelegate.generated.h"

class ASBZBagItem;
class ASBZCharacter;
class ASBZTriggerPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnBagSecured, ASBZBagItem*, SecuredBag, ASBZTriggerPoint*, TriggerPoint, ASBZCharacter*, Character);

