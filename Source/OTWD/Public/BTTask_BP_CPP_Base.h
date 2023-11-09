#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_BP_CPP_Base.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTTask_BP_CPP_Base : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_BP_CPP_Base();
};

