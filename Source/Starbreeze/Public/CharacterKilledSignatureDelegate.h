#pragma once
#include "CoreMinimal.h"
#include "CharacterKilledSignatureDelegate.generated.h"

class ASBZCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterKilledSignature, ASBZCharacter*, KilledCharacter);

