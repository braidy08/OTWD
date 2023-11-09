#pragma once
#include "CoreMinimal.h"
#include "SBZSpawnedPawnDieInfo.generated.h"

class APawn;
class ASBZSpawnerBase;

USTRUCT(BlueprintType)
struct FSBZSpawnedPawnDieInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZSpawnerBase* Spawner;
    
    STARBREEZE_API FSBZSpawnedPawnDieInfo();
};

