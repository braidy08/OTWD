#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EBTCoverPoint_Operation.h"
#include "SBZBTTask_CoverPoint.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_CoverPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CurrentCoverPointBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetCoverPointBlackboardKey;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBTCoverPoint_Operation Operation;
    
    USBZBTTask_CoverPoint();
};

