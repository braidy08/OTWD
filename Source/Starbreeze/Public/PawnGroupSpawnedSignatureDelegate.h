#pragma once
#include "CoreMinimal.h"
#include "PawnGroupSpawnedSignatureDelegate.generated.h"

class APawn;
class ASBZSpawnerBase;
class USBZEncounterGroupSchematic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPawnGroupSpawnedSignature, USBZEncounterGroupSchematic*, EncounterGroup, ASBZSpawnerBase*, Spawner, const TArray<APawn*>&, Pawns);

