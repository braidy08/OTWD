#pragma once
#include "CoreMinimal.h"
#include "CharacterSchematicChangedDelegate.generated.h"

class ASBZCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterSchematicChanged, ASBZCharacter*, Character);

