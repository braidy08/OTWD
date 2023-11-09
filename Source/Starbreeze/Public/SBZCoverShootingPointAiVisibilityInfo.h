#pragma once
#include "CoreMinimal.h"
#include "ESBZShootingPointType.h"
#include "SBZAIVisibilityLeafNode.h"
#include "SBZCoverShootingPointAiVisibilityInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZCoverShootingPointAiVisibilityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZShootingPointType ShootingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIVisibilityLeafNode AIVisibilityNode;
    
    STARBREEZE_API FSBZCoverShootingPointAiVisibilityInfo();
};

