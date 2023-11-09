#pragma once
#include "CoreMinimal.h"
#include "SBZCharacterGotHitStruct.h"
#include "OnCharacterGotHitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterGotHit, FSBZCharacterGotHitStruct, Params);

