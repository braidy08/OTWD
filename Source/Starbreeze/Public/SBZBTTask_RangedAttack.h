#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ESBZBTTask_RangedAttack_HipFireAction.h"
#include "ESBZBTTask_RangedAttack_InterruptAction.h"
#include "ESBZBTTask_RangedAttack_LineOfSightAction.h"
#include "ESBZBTTask_RangedAttack_TargetAction.h"
#include "SBZBTTask_RangedAttack.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class STARBREEZE_API UDEPRECATED_SBZBTTask_RangedAttack : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBTTask_RangedAttack_TargetAction TargetAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetBlackboardKey;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBTTask_RangedAttack_InterruptAction InterruptAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBTTask_RangedAttack_LineOfSightAction LineOfSightAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBTTask_RangedAttack_HipFireAction HipFireAction;
    
public:
    UDEPRECATED_SBZBTTask_RangedAttack();
};

