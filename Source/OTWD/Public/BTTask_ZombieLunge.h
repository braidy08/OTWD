#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_ZombieLunge.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTTask_ZombieLunge : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_ZombieLunge();
};

