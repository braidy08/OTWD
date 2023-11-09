#pragma once
#include "CoreMinimal.h"
#include "PathConnection.generated.h"

class APathNode;

USTRUCT(BlueprintType)
struct STARBREEZE_API FPathConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APathNode> StartNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APathNode> EndNode;
    
    FPathConnection();
};

