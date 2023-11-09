#pragma once
#include "CoreMinimal.h"
#include "NodeEventMap.h"
#include "NodeEventExclusionData.generated.h"

class APathNode;
class APathNodeEvent;

USTRUCT(BlueprintType)
struct FNodeEventExclusionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APathNode*, FNodeEventMap> AffectedNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<APathNodeEvent*> ExcludedEventSet;
    
    STARBREEZE_API FNodeEventExclusionData();
};

