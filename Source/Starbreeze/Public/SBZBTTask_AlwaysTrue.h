#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_AlwaysTrue.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_AlwaysTrue : public UBTTaskNode {
    GENERATED_BODY()
public:
    USBZBTTask_AlwaysTrue();
};

