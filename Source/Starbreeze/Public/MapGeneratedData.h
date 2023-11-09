#pragma once
#include "CoreMinimal.h"
#include "GeneratedPathPair.h"
#include "MapGeneratedData.generated.h"

USTRUCT(BlueprintType)
struct FMapGeneratedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedPathPair> ControllerPaths;
    
    STARBREEZE_API FMapGeneratedData();
};

