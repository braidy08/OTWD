#pragma once
#include "CoreMinimal.h"
#include "WeightedSpawner.generated.h"

class ASBZSpawnerBase;

USTRUCT(BlueprintType)
struct FWeightedSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZSpawnerBase* Spawner;
    
    STARBREEZE_API FWeightedSpawner();
};

