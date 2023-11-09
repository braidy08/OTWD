#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerAttackStruct.h"
#include "OnPlayerAttackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerAttack, FSBZPlayerAttackStruct, Params);

