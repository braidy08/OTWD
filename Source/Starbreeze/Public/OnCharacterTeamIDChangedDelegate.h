#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "OnCharacterTeamIDChangedDelegate.generated.h"

class ASBZCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterTeamIDChanged, ASBZCharacter*, Character, const FGenericTeamId&, NewTeamId);

