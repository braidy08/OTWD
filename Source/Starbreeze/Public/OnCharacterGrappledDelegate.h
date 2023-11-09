#pragma once
#include "CoreMinimal.h"
#include "OnCharacterGrappledDelegate.generated.h"

class ASBZCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterGrappled, ASBZCharacter*, Character, bool, bIsPlayerCharacter);

