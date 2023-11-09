#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_GetRandomPatrolLoaction.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTTask_GetRandomPatrolLoaction : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector RandomPatrolLocationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector RandomPatrolWaitTimeKey;
    
    UBTTask_GetRandomPatrolLoaction();
};

