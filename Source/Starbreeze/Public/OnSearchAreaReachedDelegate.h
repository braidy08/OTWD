#pragma once
#include "CoreMinimal.h"
#include "OnSearchAreaReachedDelegate.generated.h"

class ASBZAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSearchAreaReached, ASBZAICharacter*, Character);

