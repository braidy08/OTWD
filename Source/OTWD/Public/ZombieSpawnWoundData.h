#pragma once
#include "CoreMinimal.h"
#include "ZombieSpawnWoundData.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FZombieSpawnWoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstWoundChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondWoundChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FirstWoundIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SecondWoundIndices;
    
    FZombieSpawnWoundData();
};

