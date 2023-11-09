#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_SetGoalLocation.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTTask_SetGoalLocation : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_SetGoalLocation();
};

