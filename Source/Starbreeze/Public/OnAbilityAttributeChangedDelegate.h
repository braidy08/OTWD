#pragma once
#include "CoreMinimal.h"
#include "OnAbilityAttributeChangedDelegate.generated.h"

class ASBZPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAbilityAttributeChanged, ASBZPlayerCharacter*, Character, float, NewValue, float, OldValue);

