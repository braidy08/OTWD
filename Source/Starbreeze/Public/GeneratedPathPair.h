#pragma once
#include "CoreMinimal.h"
#include "GeneratedPath.h"
#include "GeneratedPathPair.generated.h"

class APathController;

USTRUCT(BlueprintType)
struct FGeneratedPathPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APathController> Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneratedPath GeneratedPath;
    
    STARBREEZE_API FGeneratedPathPair();
};

