#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_WaitForEmptyLadder.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_WaitForEmptyLadder : public UBTTaskNode {
    GENERATED_BODY()
public:
    USBZBTTask_WaitForEmptyLadder();
};

