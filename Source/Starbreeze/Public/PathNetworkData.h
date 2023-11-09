#pragma once
#include "CoreMinimal.h"
#include "PathNetworkData.generated.h"

class APathNode;

USTRUCT(BlueprintType)
struct STARBREEZE_API FPathNetworkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<APathNode*> AllNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathNode*> PotentialEntryNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathNode*> PotentialExitNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathNode*> PotentialGuideNodes;
    
    FPathNetworkData();
};

