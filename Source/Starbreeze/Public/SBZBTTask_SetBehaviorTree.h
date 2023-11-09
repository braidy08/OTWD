#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_SetBehaviorTree.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class USBZBTTask_SetBehaviorTree : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
public:
    USBZBTTask_SetBehaviorTree();
};

