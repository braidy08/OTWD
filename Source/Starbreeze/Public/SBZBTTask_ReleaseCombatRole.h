#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_ReleaseCombatRole.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_ReleaseCombatRole : public UBTTaskNode {
    GENERATED_BODY()
public:
    USBZBTTask_ReleaseCombatRole();
};

