#pragma once
#include "CoreMinimal.h"
#include "SBZRequestGroupHandle.h"
#include "PawnDynamicDelegateDelegate.generated.h"

class APawn;
class ASBZSpawnerBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FPawnDynamicDelegate, FSBZRequestGroupHandle, RequestHandle, APawn*, Pawn, ASBZSpawnerBase*, Spawner);

