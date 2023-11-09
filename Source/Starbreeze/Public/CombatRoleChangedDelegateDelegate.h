#pragma once
#include "CoreMinimal.h"
#include "ESBZAIRole.h"
#include "CombatRoleChangedDelegateDelegate.generated.h"

class ASBZHumanAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCombatRoleChangedDelegate, ASBZHumanAICharacter*, Sender, ESBZAIRole, NewRole, ESBZAIRole, OldRole);

