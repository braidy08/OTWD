#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_AlwaysFalse.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_AlwaysFalse : public UBTTaskNode {
    GENERATED_BODY()
public:
    USBZBTTask_AlwaysFalse();
};

