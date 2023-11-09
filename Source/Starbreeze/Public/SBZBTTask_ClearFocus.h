#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "SBZBTTask_ClearFocus.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_ClearFocus : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTTask_ClearFocus();
};

