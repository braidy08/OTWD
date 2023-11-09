#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "SBZBTTask_BBSetRandomizedBase.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZBTTask_BBSetRandomizedBase : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTTask_BBSetRandomizedBase();
};

