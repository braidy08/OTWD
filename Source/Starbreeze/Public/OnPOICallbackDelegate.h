#pragma once
#include "CoreMinimal.h"
#include "OnPOICallbackDelegate.generated.h"

class ASBZAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPOICallback, ASBZAICharacter*, Character);

