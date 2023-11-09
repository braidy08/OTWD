#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_GetLadderWaitingPoint.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_GetLadderWaitingPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    USBZBTTask_GetLadderWaitingPoint();
};

