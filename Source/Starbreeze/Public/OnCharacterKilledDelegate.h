#pragma once
#include "CoreMinimal.h"
#include "SBZOnKillData.h"
#include "OnCharacterKilledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterKilled, const FSBZOnKillData&, KillData);

