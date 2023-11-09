#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "SBZBTTask_BBSetBase.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZBTTask_BBSetBase : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTTask_BBSetBase();
};

