#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_ActBase.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZBTTask_ActBase : public UBTTaskNode {
    GENERATED_BODY()
public:
    USBZBTTask_ActBase();
};

