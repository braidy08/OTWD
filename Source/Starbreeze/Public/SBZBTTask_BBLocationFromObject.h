#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTTask_BBLocationFromObject.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBLocationFromObject : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ObjectBlackboardKey;
    
    USBZBTTask_BBLocationFromObject();
};

