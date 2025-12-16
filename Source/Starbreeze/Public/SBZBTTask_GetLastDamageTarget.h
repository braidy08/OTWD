#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTTask_GetLastDamageTarget.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_GetLastDamageTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector DamagedByTargetKey;
    
    USBZBTTask_GetLastDamageTarget();

};

