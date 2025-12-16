#pragma once
#include "CoreMinimal.h"
#include "OnExtraGrapplerAddedDelegate.generated.h"

class ASBZCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnExtraGrapplerAdded, ASBZCharacter*, Victim, ASBZCharacter*, AddedGappler, int32, TotalGrapplers);

