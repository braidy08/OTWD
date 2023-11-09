#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_GetRandomLocationInWorld.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTTask_GetRandomLocationInWorld : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetLocationKey;
    
public:
    UBTTask_GetRandomLocationInWorld();
};

