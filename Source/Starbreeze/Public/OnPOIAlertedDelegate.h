#pragma once
#include "CoreMinimal.h"
#include "OnPOIAlertedDelegate.generated.h"

class ASBZAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPOIAlerted, ASBZAICharacter*, Character, float, Distance);

