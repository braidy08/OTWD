#pragma once
#include "CoreMinimal.h"
#include "EPathNodeUsage.h"
#include "NodeUsageData.generated.h"

class APathNode;

USTRUCT(BlueprintType)
struct FNodeUsageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APathNode> Node;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPathNodeUsage Usage;
    
    STARBREEZE_API FNodeUsageData();
};

