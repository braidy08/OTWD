#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BlackboardKeyType_Timer.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API UBlackboardKeyType_Timer : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UBlackboardKeyType_Timer();
};

