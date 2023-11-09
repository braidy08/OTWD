#pragma once
#include "CoreMinimal.h"
#include "EPathNodeActualUsage.h"
#include "PathRoute.generated.h"

class APathNode;

USTRUCT(BlueprintType)
struct FPathRoute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPathNodeActualUsage StartNodeUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPathNodeActualUsage EndNodeUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathNode*> Nodes;
    
    STARBREEZE_API FPathRoute();
};

