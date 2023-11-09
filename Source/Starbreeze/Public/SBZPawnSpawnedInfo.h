#pragma once
#include "CoreMinimal.h"
#include "SBZPawnSpawnedInfo.generated.h"

class APawn;
class ASBZSpawnerBase;

USTRUCT(BlueprintType)
struct FSBZPawnSpawnedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* SpawnedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZSpawnerBase* Spawner;
    
    STARBREEZE_API FSBZPawnSpawnedInfo();
};

