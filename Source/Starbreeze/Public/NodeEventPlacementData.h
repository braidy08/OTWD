#pragma once
#include "CoreMinimal.h"
#include "NodeEventExclusionData.h"
#include "NodeEventPlacementData.generated.h"

class APathNode;
class APathNodeEvent;

USTRUCT(BlueprintType)
struct FNodeEventPlacementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APathNode* Node;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APathNodeEvent*, FNodeEventExclusionData> EventChoicesOnNode;
    
    STARBREEZE_API FNodeEventPlacementData();
};

