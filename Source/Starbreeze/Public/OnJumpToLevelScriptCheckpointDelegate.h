#pragma once
#include "CoreMinimal.h"
#include "OnJumpToLevelScriptCheckpointDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJumpToLevelScriptCheckpoint, int32, ScriptCheckpointIndex);

