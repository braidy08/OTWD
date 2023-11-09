#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZAIStanceIdHelper.h"
#include "SBZBTTask_GetPatrolStance.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_GetPatrolStance : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIStanceIdHelper PatrolStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OverridenStanceKey;
    
public:
    USBZBTTask_GetPatrolStance();
};

