#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_SetWaitingForLadder.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_SetWaitingForLadder : public UBTTaskNode {
    GENERATED_BODY()
public:
    USBZBTTask_SetWaitingForLadder();
};

