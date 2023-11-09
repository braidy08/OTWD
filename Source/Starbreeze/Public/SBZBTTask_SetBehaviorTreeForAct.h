#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTTask_SetBehaviorTreeForAct.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_SetBehaviorTreeForAct : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ActKey;
    
    USBZBTTask_SetBehaviorTreeForAct();
};

