#pragma once
#include "CoreMinimal.h"
#include "OnSearchTargetReachedDelegate.generated.h"

class ASBZAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSearchTargetReached, ASBZAICharacter*, Character);

