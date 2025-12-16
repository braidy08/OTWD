#pragma once
#include "CoreMinimal.h"
#include "SpawnerManualWeights.generated.h"

class ASBZSpawnerBase;

USTRUCT(BlueprintType)
struct FSpawnerManualWeights {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZSpawnerBase* Spawner;
    
    STARBREEZE_API FSpawnerManualWeights();
};

